#include <iostream>
using namespace std;

int main(){
	string letra;
	//MAIUSCULA= "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z";
	//MINUSCULA= "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z";
	//('A')or('B')or('C')or('D')or('E')or('F')or('G')or('H')or('I')or('J')or('K')or('L')or('M')or('N')or('O')or('P')or('Q')or('R')or('S')or('T')or('U')or('V')or('W')or('X')or('Y')or('Z')
	//('a')or('b')or('c')or('d')or('e')or('f')or('g')or('h')or('i')or('j')or('k')or('l')or('m')or('n')or('o')or('p')or('q')or('r')or('s')or('t')or('u')or('v')or('w')or('x')or('y')or('z')
	cin>> letra;
	
	if(letra == ("A")or("B")or("C")or("D")or("E")or("F")or("G")or("H")or("I")or("J")or("K")or("L")or("M")or("N")or("O")or("P")or("Q")or("R")or("S")or("T")or("U")or("V")or("W")or("X")or("Y")or("Z")){
		cout<< "MAIUSCULA" ;
	}else if(letra == ("a")or("b")or("c")or("d")or("e")or("f")or("g")or("h")or("i")or("j")or("k")or("l")or("m")or("n")or("o")or("p")or("q")or("r")or("s")or("t")or("u")or("v")or("w")or("x")or("y")or("z")){
		cout<< "MINUSCULA" ;	
	}
	
	
	return 0;
}
