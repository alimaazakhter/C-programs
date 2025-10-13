SET SERVEROUTPUT ON;

DECLARE
    v_male_count   NUMBER;
    v_female_count NUMBER;
BEGIN
    -- Count male students
    SELECT COUNT(*) INTO v_male_count
    FROM students
    WHERE LOWER(gender) = 'male';

    -- Count female students
    SELECT COUNT(*) INTO v_female_count
    FROM students
    WHERE LOWER(gender) = 'female';

    -- Display the results
    DBMS_OUTPUT.PUT_LINE('Total Male Students   : ' || v_male_count);
    DBMS_OUTPUT.PUT_LINE('Total Female Students : ' || v_female_count);
    DBMS_OUTPUT.PUT_LINE('Total Students        : ' || (v_male_count + v_female_count));
END;
/