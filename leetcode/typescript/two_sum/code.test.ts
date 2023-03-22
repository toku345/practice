import { twoSum, twoSum2, twoSum3 } from "./code";

const func1 = twoSum;

test("example1", () => {
  const nums = [2, 7, 11, 15];
  const target = 9;
  const expected = [0, 1];

  const result1 = twoSum(nums, target);
  expect(result1).toEqual(expected);
  const result2 = twoSum2(nums, target);
  expect(result2).toEqual(expected);
  const result3 = twoSum3(nums, target);
  expect(result3).toEqual(expected);
});

test("example2", () => {
  const nums = [3, 2, 4];
  const target = 6;
  const expected = [1, 2];

  const result1 = twoSum(nums, target);
  expect(result1).toEqual(expected);
  const result2 = twoSum2(nums, target);
  expect(result2).toEqual(expected);
  const result3 = twoSum3(nums, target);
  expect(result3).toEqual(expected);
});

test("example3", () => {
  const nums = [3, 3];
  const target = 6;
  const expected = [0, 1];

  const result1 = twoSum(nums, target);
  expect(result1).toEqual(expected);
  const result2 = twoSum2(nums, target);
  expect(result2).toEqual(expected);
  const result3 = twoSum3(nums, target);
  expect(result3).toEqual(expected);
});
