struct trieNode{
  trieNode* links[26];
  bool is_word;
  trieNode()
  {
    for(int i=0;i<26;i++)links[i]=NULL;
    is_word=false;
  }
}
class trie{
  trieNode* root;
  trie()
  {
    root=new trieNode();
  }
  void insert(string word)
  {
    trieNode* curr=root;
    for(auto ch:word)
    {
      if(curr->link[ch-'a']==NULL)curr->link[ch-'a']=new trieNode;
      curr=curr->link[ch-'a'];
    }
    is_word=true;
  }
  bool search(string word)
  {
    trieNode* curr=root;
    for(auto ch:)
  }
}