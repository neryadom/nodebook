#include <iostream>
#include <string>


class IdGenerator{
	private:
		static int idCounter;
	public:
		static int getId(){
			int outputId = idCounter;
			idCounter++;
			return outputId;
		}
};


int IdGenerator::idCounter = 0;

class Node {
	private:
		int id;
		int nodeByteSize;
		int contentByteSize;
		int tagCount;
		int linkCount;
		std::string title;
		std::string content; /* only text content for now */
	public:
		int getId(){
			return id;
		}
		int getNodeByteSize(){
			return nodeByteSize;
		}
		int getContentByteSize(){
			return contentByteSize;
		}
		int getTagCount(){
			return tagCount;
		}
		int getLinkCount(){
			return linkCount;
		}
		std::string getTitle(){
			return title;
		}
		std::string getContent(){
			return content;
		}

		void setTitle(std::string newTitle){
			title = newTitle; 
		}
		void setContent(std::string newContent){
			content = newContent;
		}

		Node(std::string t, std::string c) : 
			id(IdGenerator::getId()),
			nodeByteSize(sizeof(Node) + static_cast<int>(t.size()) + static_cast<int>(c.size())),
			contentByteSize(static_cast<int>(c.size())),
			tagCount(0), 
			linkCount(0), 
			title(t), 
			content(c) {}

		void toString(){
			std::cout << "\nDETAILS OF NODE " << id << "\n"
				<< "Node byte size: " << nodeByteSize << "\n"
				<< "Content byte size: " << contentByteSize << "\n"
				<< "Title: " << title << "\n"
				<< "Content: " << content << "\n" << std::endl;
		}
};


int main(){
	Node n0("First Node", "The contents of the first node are vast and plentiful");
	Node n1("Second Node", "I would like to talk about the merits of tables");
	n0.toString();
	n1.toString();
	return 0;
}
