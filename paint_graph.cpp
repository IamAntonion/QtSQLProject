#include "paint_graph.h"

namespace paint_graph {

paint_graph::paint_graph() {
    _scene = new QGraphicsScene;
}

QGraphicsScene* paint_graph::get_scene() {
    return _scene;
}

}
