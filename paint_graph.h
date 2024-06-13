#ifndef PAINT_GRAPH_H
#define PAINT_GRAPH_H

#include <QPainter>
#include <QGraphicsScene>

namespace paint_graph {

class paint_graph
{
public:
    paint_graph();

    QGraphicsScene* get_scene();
private:
    QGraphicsScene *_scene;
};

}
#endif // PAINT_GRAPH_H
