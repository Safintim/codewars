function highAndLow(numbers){
  let a = numbers.split(' ').map(Number);
  a.sort();
  return `${Math.max(...a)} ${Math.min(...a)}`;
}
