import { twoSum3 as twoSum } from "./code";

test("example1", () => {
  let nums = [2, 7, 11, 15];
  let target = 9;
  var result = twoSum(nums, target);
  expect(result).toEqual([0, 1]);
});

test("example2", () => {
  let nums = [3, 2, 4];
  let target = 6;
  var result = twoSum(nums, target);

  expect(result).toEqual([1, 2]);
});

test("example3", () => {
  let nums = [3, 3];
  let target = 6;
  var result = twoSum(nums, target);

  expect(result).toEqual([0, 1]);
});
