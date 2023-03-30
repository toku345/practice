import { ListNode, addTwoNumbers, makeListNodes } from "./code";

test("example1", () => {
  const l1 = makeListNodes([2, 4, 3]);
  const l2 = makeListNodes([5, 6, 4]);
  const result = addTwoNumbers(l1, l2);

  const expected = makeListNodes([7, 0, 8]);
  expect(result).toEqual(expected);
});

test("example2", () => {
  const l1 = makeListNodes([0]);
  const l2 = makeListNodes([0]);
  const result = addTwoNumbers(l1, l2);

  const expected = makeListNodes([0]);
  expect(result).toEqual(expected);
});

test("example3", () => {
  const l1 = makeListNodes([9, 9, 9, 9, 9, 9, 9]);
  const l2 = makeListNodes([9, 9, 9, 9]);
  const result = addTwoNumbers(l1, l2);

  const expected = makeListNodes([8, 9, 9, 9, 0, 0, 0, 1]);
  expect(result).toEqual(expected);
});

test("failed example", () => {
  const l1 = makeListNodes([
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1,
  ]);
  const l2 = makeListNodes([5, 6, 4]);
  const result = addTwoNumbers(l1, l2);

  const expected = makeListNodes([
    6, 6, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1,
  ]);
  expect(result).toEqual(expected);
});

test("my test case1", () => {
  const l1 = makeListNodes([5, 5, 5]);
  const l2 = makeListNodes([5, 4, 4]);
  const result = addTwoNumbers(l1, l2);

  const expected = makeListNodes([0, 0, 0, 1]);
});
