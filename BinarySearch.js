var doSearch = function(array, targetValue) {
	var min = 0;
	var max = array.length - 1;
    var guess;
    
    while(min<=max)
    {
        guess = Math.floor((min+max)/2);
        if(array[guess]===targetValue){ return guess;}
        else if(array[guess]<targetValue){ min=guess+1;}
        else {max=guess-1;}
    }
	return -1;
};

var primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 
		41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97];

var result = doSearch(primes, 73);
println("Found prime at index " + result);

Program.assertEqual(doSearch(primes, 73), 20);

/*1. Seja min = 0 e max = n-1.
2. Se max < min, então pare:oO alvo não está presente no array. Retorne -1.
3. Calcule guess como a média de max e min, arredondada para baixo (de modo que seja um número inteiro).
4. Se array[guess] for igual ao alvo, então pare. Você encontrou! Retorne guess.
5. Se o palpite for baixo demais, ou seja, array[guess] < target, então faça min = guess + 1.
6. Caso contrário, o palpite foi alto demais. Faça max = guess - 1.
7. Volte para o passo 2.*/
