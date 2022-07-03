//Linear Time O(n)
const nemo = ['nemo']
const large = new Array(100).fill('nemo')

function findNemo(array)  {
    let t0 = performance.now()
    for(let i = 0;i<array.length; i++){
        if (array[i] === 'nemo'){
            console.log('Found Nemo')
        }
    }
    let t1 = performance.now()
    console.log('Call to find Nemo took' + (t1-t0) + 'ms')
}

// findNemo(large)


//Constant Time O(1)
const boxes = [0,1,2,3,4,5]

function logFirstTwoBoxes(boxes){
    console.log(boxes[0])
    console.log(boxes[1])
}

logFirstTwoBoxes(boxes)
