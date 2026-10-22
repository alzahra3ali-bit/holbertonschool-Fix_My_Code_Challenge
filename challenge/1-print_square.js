#!/usr/bin/node
/**
 * Print a square of size `size` with the character #
 */
const arg = process.argv[2];

if (arg === undefined) {
  console.log("Missing size");
  process.exit(1);
}

const size = parseInt(arg, 10);

if (isNaN(size) || size <= 0) {
  console.log("Invalid size");
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  let row = '';
  for (let j = 0; j < size; j++) {
    row += '#';
  }
  console.log(row);
}
