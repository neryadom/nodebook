#include <iostream>

class Node {
	private:
		int id;
		int nodeByteSize;
		int contentSize;
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
		int getContentSize(){
			return contentSize;
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

		Node(std::string t, std::string c): title(t), content(c) {}
		
};


int main(){
	return 0;
}
