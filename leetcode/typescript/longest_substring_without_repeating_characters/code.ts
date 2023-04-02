// MY Answer: Brute force
function lengthOfLongestSubstring(s: string): number {
  if (s.length === 1) return s.length;

  let maxLength = 0;
  let charSet: Set<string> = new Set<string>();

  for (let i = 0; i < s.length - 1; i++) {
    charSet.add(s[i]);
    for (let j = i + 1; j < s.length; j++) {
      if (charSet.has(s[j])) {
        maxLength = Math.max(maxLength, charSet.size);
        charSet.clear();
        break;
      } else {
        charSet.add(s[j]);
      }
      maxLength = Math.max(maxLength, charSet.size);
    }
  }

  return maxLength;
}

export { lengthOfLongestSubstring };
