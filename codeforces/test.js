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

const hello = async()=>{
	const hey = await setTimeout(()=>console.log('hi there') , 1000)
	const t=  5 
	console.log(t)
}

hello()