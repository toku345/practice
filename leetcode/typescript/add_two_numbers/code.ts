class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

function makeListNodes(numbers: number[]): ListNode {
  numbers.reverse();
  let listNode: ListNode;
  let beforeNode: ListNode | null = null;
  for (let n of numbers) {
    listNode = new ListNode(n, beforeNode);
    beforeNode = listNode;
  }
  return listNode!;
}

function addTwoNumbers(
  l1: ListNode | null,
  l2: ListNode | null
): ListNode | null {
  let addedList: number[] = [];
  let isRollUp: boolean = false;

  while (l1 !== null || l2 !== null || isRollUp) {
    let n1 = (l1 && l1.val) || 0;
    let n2 = (l2 && l2.val) || 0;
    let added = n1 + n2;
    if (isRollUp) {
      added += 1;
    }

    if (added >= 10) {
      isRollUp = true;
      addedList.push(added % 10);
    } else {
      isRollUp = false;
      addedList.push(added);
    }

    if (l1 !== null) l1 = l1.next;
    if (l2 !== null) l2 = l2.next;
  }

  return makeListNodes(addedList);
}

export { ListNode, addTwoNumbers, makeListNodes };
