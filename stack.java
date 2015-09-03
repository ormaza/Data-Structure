import java.io.*;
import java.util.Collections;
import java.util.LinkedList;

public class Pilha<X> {
	
	LinkedList<X> conteudo;
	
	Pilha()
	{
		conteudo = new LinkedList<X>();
	}
	
	boolean estaVazia()
	{
		
		return conteudo.isEmpty(); 
	}
	
	void empilha(X x)
	{
		conteudo.addFirst(x);
	}
	
	X desempilha()
	{
		if(conteudo.isEmpty())
		{
			throw new Error("Pilha está vazia");
		}
		else
		{
		return conteudo.removeFirst();
		}
	}
	
	X topo()
	{
		if(conteudo.isEmpty())
	{
			throw new Error("Pilha está vazia");
	}	
		else
		{
		return conteudo.getFirst();
		}
	
		
	}
	
	void reinicialize()
	{
		conteudo.clear();
	}
	
	public String toStringInverse()
	{
		LinkedList<X> aux = new LinkedList<X>();
		LinkedList<X> inversa = new LinkedList<X>();
		
		for(int i=0;i<conteudo.size();i++)
		{
			aux.add(conteudo.get(i));
		}
		
		
		while(!aux.isEmpty())
		{
			inversa.add(aux.removeLast());
		}
		
		return inversa.toString();
	}
	
	public String toString()
	{
		return conteudo.toString();
	}
	
	static void test2() {
		Pilha<Double> aPilha = new Pilha<Double>();
		System.out.println(aPilha);
		aPilha.empilha(1.1);
		System.out.println(aPilha);
		aPilha.empilha(2.1);
		System.out.println(aPilha);
		aPilha.empilha(3.1);
		System.out.println(aPilha);
		double valor = 0.0;
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor );
		System.out.println(aPilha);
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor );
		System.out.println(aPilha);
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor );
		System.out.println(aPilha);
		}
	
	
	
	
	static void test1() {
		Pilha<Double> aPilha = new Pilha<Double>();
		aPilha.empilha(1.1);
		aPilha.empilha(2.1);
		aPilha.empilha(3.1);
		aPilha.empilha(4.1);
		aPilha.empilha(5.1);
		double valor = 0.0;
		valor = aPilha.topo();
		System.out.println("topo pilha = " + valor);
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor);
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor);
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor);
		valor = aPilha.topo();
		System.out.println("topo pilha = " + valor);
		valor = aPilha.desempilha();
		System.out.println("topo pilha = " + valor);
		}
	
	public static void main(String[] args) {
		//test1();
		//test2();
		}

	
}
