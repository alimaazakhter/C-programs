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


SET SERVEROUTPUT ON;

DECLARE
    -- Item variables
    v_item1_name  shopping.item_name%TYPE;
    v_item1_qty   shopping.quantity%TYPE;
    v_item1_price shopping.price%TYPE;
    v_item1_total NUMBER;

    v_item2_name  shopping.item_name%TYPE;
    v_item2_qty   shopping.quantity%TYPE;
    v_item2_price shopping.price%TYPE;
    v_item2_total NUMBER;

    v_item3_name  shopping.item_name%TYPE;
    v_item3_qty   shopping.quantity%TYPE;
    v_item3_price shopping.price%TYPE;
    v_item3_total NUMBER;

    v_grand_total NUMBER;
BEGIN
    -- Get first item
    SELECT item_name, quantity, price
    INTO v_item1_name, v_item1_qty, v_item1_price
    FROM shopping WHERE item_id = 1;
    v_item1_total := v_item1_qty * v_item1_price;

    -- Get second item
    SELECT item_name, quantity, price
    INTO v_item2_name, v_item2_qty, v_item2_price
    FROM shopping WHERE item_id = 2;
    v_item2_total := v_item2_qty * v_item2_price;

    -- Get third item
    SELECT item_name, quantity, price
    INTO v_item3_name, v_item3_qty, v_item3_price
    FROM shopping WHERE item_id = 3;
    v_item3_total := v_item3_qty * v_item3_price;

    -- Calculate grand total
    v_grand_total := v_item1_total + v_item2_total + v_item3_total;

    -- Display bill
    DBMS_OUTPUT.PUT_LINE('Item Name   Qty   Price   Total');
    DBMS_OUTPUT.PUT_LINE('--------------------------------');
    DBMS_OUTPUT.PUT_LINE(v_item1_name || '   ' || v_item1_qty || '   ' || v_item1_price || '   ' || v_item1_total);
    DBMS_OUTPUT.PUT_LINE(v_item2_name || '   ' || v_item2_qty || '   ' || v_item2_price || '   ' || v_item2_total);
    DBMS_OUTPUT.PUT_LINE(v_item3_name || '   ' || v_item3_qty || '   ' || v_item3_price || '   ' || v_item3_total);
    DBMS_OUTPUT.PUT_LINE('--------------------------------');
    DBMS_OUTPUT.PUT_LINE('Grand Total: ' || v_grand_total);
END;
/