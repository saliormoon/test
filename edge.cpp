/*
 * edge.cpp
 *
 *  Created on: 2016Äê12ÔÂ20ÈÕ
 *      Author: w81021089
 */

#include <node.h>
#include <iostream>
using namespace std;
class edge: public node
{
public:
	double apply(node v1,node v2){
		node::apply(v1,v2);

	}
};


void main(int argc,string argv[]){
	edge e=new edge();
	edge::node v1=new node(1,2,0.5);
	edge::node v2=new node(2,3,0.7);
	e.apply(v1,v2);

}
