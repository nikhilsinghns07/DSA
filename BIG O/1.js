// //Linear Time O(n)
const nemo = ['Dhoni']
// const large = new Array(100).fill('nemo')
const names = ['Rohit','Dhawan','Kohli','Rahul','Dhoni','Pandaya','Jadeja','Bhuvi','Shami','Chahal','Bumrah']

function findNemo(array)  {
    
    for(let i = 0;i<array.length; i++){
        if (array[i] === 'Dhoni'){
            console.log('Found ')
        }
    }
}

findNemo(names)


// O(n) As the number of inputs increase the number of operations increase. Also called linear time.
