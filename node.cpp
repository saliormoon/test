/*
 * node.cpp
 *
 *  Created on: 2016Äê12ÔÂ20ÈÕ
 *      Author: w81021089
 */
#include <node.h>
#include <iostream>
using namespace std;
//class node{
//	int from_v;
//	int to_v;
//	double value;
//	node(int from_id,int to_id,double val){
//      from_v=from_id;
//      to_v=to_id;
//      value=val;
//	}
//	void gather(node v1,node v2){
//       if(v1.from_v==v2.to_v){
//    	   cout<<"there is a relation between"<<" "<<v1<<" "+"and"+" "+v2;
//       }
//	}
//	double apply(node v1,node v2){
//	       return v1.value+v2.value;
//	}
//
//};

	node::node(int from_id,int to_id,double val){
      from_v=from_id;
      to_v=to_id;
      value=val;
	}
	void node:: gather(node v1,node v2){
       if(v1.from_v==v2.to_v){
    	   cout<<"there is a relation between"<<" "<<v1<<" "+"and"+" "+v2;
       }
	}
	double node:: apply(node v1,node v2){
	       return v1.value+v2.value;
	}
