var swap = function(array, firstIndex, secondIndex) {
    var temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
};

var indexOfMinimum = function(array, startIndex) {

    var minValue = array[startIndex];
    var minIndex = startIndex;

    for(var i = minIndex + 1; i < array.length; i++) {
        if(array[i] < minValue) {
            minIndex = i;
            minValue = array[i];
        }
    } 
    return minIndex;
}; 

var selectionSort = function(array) {
    var min;
    for(var index = 0; index < array.length; index++){
           min = indexOfMinimum(array, index);
           swap(array, index, min);
    }
};

//testes
var array = [22, 11, 99, 88, 9, 7, 42];
selectionSort(array);
Program.assertEqual(array, [7, 9, 11, 22, 42, 88, 99]);

var array2 = [-22, 11, -99, 88, 0, 7, 42];
selectionSort(array2);
Program.assertEqual(array2, [-99, -22, 0, 7, 11, 42, 88]);
