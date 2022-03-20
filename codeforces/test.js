function init(initialCount) {
  return {count: initialCount};
}

function Counter({initialCount}) {
  const [state, dispatch] = useReducer(reducer, initialCount, init);
  return (
    <>
    </>
  )
}