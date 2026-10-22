#!/usr/bin/node
const arg = process.argv[2];
if (arg === undefined) {
  process.exit(1);
}
const size = parseInt(arg, 10);
if (isNaN(size) || size <= 0) {
  process.exit(1);
}
for (let i = 0; i < size; i++) {
  let row = '';
  for (let j = 0; j < size; j++) {
    row += '#';
  }
  console.log(row);
}