#include "LRUCache.hpp"


int LRUCache::put(const std::string key, const std::string value){
  m_map[key] = value;
  m_queue.push_back(key);
  return 1;
}
std::string LRUCache::get(const std::string key){
  std::string temp;
  return temp;
}

