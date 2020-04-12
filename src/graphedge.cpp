#include "graphnode.h"
#include "graphedge.h"

GraphEdge::GraphEdge(int id)
{
    _id = id;
}

void GraphEdge::SetChildNode(std::vector<std::shared_ptr<GraphNode>>::iterator childNode)
{
    _childNode = *childNode;
}

void GraphEdge::SetParentNode(std::vector<std::shared_ptr<GraphNode>>::iterator parentNode)
{
    _parentNode = *parentNode;
}

void GraphEdge::AddToken(std::string token)
{
    _keywords.push_back(token);
}