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


2
bill number:=0:
begin
select sum(price) into bill from shopping:
dims_output-put_line ('Total Shopping bill : '||bill):
6* end:
SOL> set perveroucput on:
SOL> declare
bill number:=0:
3
4
begin
select sum(price) into bIll from shopping: dbma_output.put_line (*Total Shopping bill : *l|bill):
end:
7
/