// function init(initialCount) {
//   return {count: initialCount};
// }

// function Counter({initialCount}) {
//   const [state, dispatch] = useReducer(reducer, initialCount, init);
//   return (
//     <>
//     </>
//   )
// }cd

// const hello = async()=>{
// 	const hey = await setTimeout(()=>console.log('hi there') , 1000)
// 	const t=  5 
// 	console.log(t)
// }

// hello()

const fs = require('fs');
  
// Calling the readFileSync() method
// to read 'input.txt' file
const data = fs.readFileSync('./in', {encoding:'utf8', flag:'r'});
 
// Display the file data
let d = data.replace(/ /g,"$")

console.log(data);
console.log(d)
let position = 0 ;
const a = fs.writeFileSync("./out" ,d);