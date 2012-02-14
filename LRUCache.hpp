#include <string>
#include <map>
#include <vector>
class LRUCache
{
private:
  int m_max;
  std::vector<std::string> m_queue;
  std::map<std::string, std::string> m_map;
  
public:
  LRUCache(){};
  ~LRUCache(){};

  int put(const std::string key, const std::string value);
  std::string get(const std::string key);
};
