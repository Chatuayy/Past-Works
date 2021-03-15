package chato;

public class Graph<T>
{
	AdjList<T> firstList;
	int vertexCount;
	int edgeCount;
	AdjList<T> lastList;

	private class AdjList<T>
	{
		AdjList<T> nextList;
		T data;
		int outdegree;
		Member<T> firstMember;
		
		AdjList(){}
		
		AdjList(T newVertex)
		{
			data = newVertex;
		}
	}

	private class Member<T>
	{
		T adjVertex;
		int weight;
		Member<T> nextMember;
		
		Member(){}
		
		Member(T toV, int weight)
		{
			adjVertex = toV;
			this.weight = weight;
		}
	}
      //Exercise 1 
	void insertVertex(T newVertex)
	{  AdjList<T> temp = new AdjList<T>(newVertex);
		 
		if (vertexCount == 0)
		{  //add your code here
			firstList = temp;
			lastList = temp;
		} 
            else
		{ 
             //add your code here
            	lastList.nextList = temp;
            	lastList = temp;

		}
		vertexCount++;
      }


//Exercise 2	
AdjList<T> searchVertex(T data)
	{
	   AdjList<T> current = firstList;
        /*add a loop to search for the vertex containing the data, 
        if it is found, return the adjList containing it. */
	   while(current != null){
		   
		   if(current.data==data){
			   return current;
		   }
		   else{
		   current = current.nextList;
	   }
	   }
   
		return null;
	}

//Exercise 3
	void insertEdge(T fromData, T toData, int weight)
	{       /*Check if location vertices fromData and toData exist by calling the searchVertex method*/
		AdjList<T> fromVertex = searchVertex(fromData);
		AdjList<T> toVertex = searchVertex(toData);
		if (fromVertex == null)
		{   insertVertex(fromData);
		    fromVertex = lastList;
		}
		if (toVertex == null)
		{   insertVertex(toData);
		}
               
		Member<T> newMember = new Member<T>(toData, weight);
              //complete the code here
		newMember.nextMember = fromVertex.firstMember;
		fromVertex.firstMember = newMember;
		
		


		edgeCount++;
		fromVertex.outdegree++;
	}

 //Exercise 4

	void deleteEdge(T fromData, T toData)
	{   //Locate the fromVertex using searchVertex 
          AdjList<T> fromVertex = searchVertex(fromData);

		if (fromVertex == null)
			return;
		
           //Special case when the firstMember is the toData
		if (fromVertex.firstMember != null && toData.equals(fromVertex.firstMember.adjVertex))
		{
			 //add your code here
			fromVertex.firstMember = fromVertex.firstMember.nextMember;
			fromVertex.outdegree--;
			edgeCount--;
			//temp.nextMember = null;
		}
		else {
		  Member<T> temp = fromVertex.firstMember;
           /*add a loop to search on the right of the structure to find the toData */
		  while(temp != null && temp.nextMember != null){
			  if(temp.nextMember.adjVertex.equals(toData)){
				  temp.nextMember=temp.nextMember.nextMember;
				  fromVertex.outdegree--;
					edgeCount--;
			  }
			  else{
				  temp = temp.nextMember;
			  }
		  }

		 }

	}

      //Exercise 5
	void deleteVertex(T vertex)
	{ 	AdjList<T> currentVertex = firstList;
		AdjList<T> prev = currentVertex;
		
		//add your code here
		while(currentVertex!=null){
			deleteEdge(currentVertex.data,vertex);
			if (currentVertex.data == vertex){
				if(currentVertex.equals(firstList)){
					firstList = currentVertex.nextList;
					//currentVertex.nextList = null;
				}
				else if(currentVertex.equals(lastList)){
					lastList = prev;
					prev.nextList = null;
				}
				else
				{
					prev.nextList = currentVertex.nextList;
				}
				
				edgeCount = edgeCount-currentVertex.outdegree;
				vertexCount--;
				
			}
				prev = currentVertex;
				currentVertex = currentVertex.nextList;
		}
		
	
	}
	
	void print() {
		AdjList<T> currentList = firstList;
		while (currentList != null) {
			System.out.print(currentList.data);
			Member<T> cMem = currentList.firstMember;
			while (cMem != null) {
				System.out.print("-->" + cMem.adjVertex);
				System.out.print("," + cMem.weight);
				cMem = cMem.nextMember;
			}
			System.out.println("");
			currentList = currentList.nextList;
			if (currentList != null)
				System.out.println("|");
		}
		System.out.println("The graph consists of " + vertexCount
				+ " vertices " + "and " + edgeCount + " edges.");
	}
}


