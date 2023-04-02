import { lengthOfLongestSubstring } from "./code";

test("example1", () => {
  const s = "abcabcbb";
  const expected = 3;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});

test("example2", () => {
  const s = "bbbbb";
  const expected = 1;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});
test("example3", () => {
  const s = "pwwkew";
  const expected = 3;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});

test("my case1", () => {
  const s = "";
  const expected = 0;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});

test("failed case1", () => {
  const s = "aab";
  const expected = 2;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});

test("failed case2", () => {
  const s = "dvdf";
  const expected = 3;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});

test("failed case3", () => {
  const s = " ";
  const expected = 1;
  expect(lengthOfLongestSubstring(s)).toBe(expected);
});
