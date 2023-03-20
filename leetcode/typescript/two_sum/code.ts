// My Answer: Brute Force!
function twoSum(nums: number[], target: number): number[] {
  for (var i = 0; i < nums.length - 1; i++) {
    for (var j = i + 1; j < nums.length; j++) {
      if (nums[i] + nums[j] === target) {
        return [i, j];
      }
    }
  }

  return [];
}

// Approach 2: Two-pass Hash Table
function twoSum2(nums: number[], target: number): number[] {
  const hashmap = new Map<number, number>();
  for (const [i, num] of nums.entries()) {
    hashmap.set(num, i);
  }
  for (const [i, num] of nums.entries()) {
    const complement = target - num;
    if (hashmap.get(complement) != null && hashmap.get(complement) != i) {
      return [i, hashmap.get(complement)!];
    }
  }
  return [];
}

function twoSum3(nums: number[], target: number): number[] {
  var hashmap = new Map<number, number>();
  for (const [i, num] of nums.entries()) {
    const complement = target - num;
    if (hashmap.get(complement) != null){
      return [hashmap.get(complement)!, i];
    }
    hashmap.set(num, i);
  }

  return [];
}

export { twoSum, twoSum2, twoSum3 };
