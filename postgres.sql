CREATE OR REPLACE FUNCTION sum_and_product(IN a INTEGER, IN b INTEGER, OUT sum INTEGER, OUT product INTEGER)
AS $$
BEGIN
  sum := a + b;
  product := a * b;
  SELECT sum, product;
END;
$$ LANGUAGE plpgsql;