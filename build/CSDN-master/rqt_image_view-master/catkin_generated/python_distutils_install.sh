#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/xu/dogkin_ws/src/CSDN-master/rqt_image_view-master"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/xu/dogkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/xu/dogkin_ws/install/lib/python2.7/dist-packages:/home/xu/dogkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/xu/dogkin_ws/build" \
    "/usr/bin/python" \
    "/home/xu/dogkin_ws/src/CSDN-master/rqt_image_view-master/setup.py" \
    build --build-base "/home/xu/dogkin_ws/build/CSDN-master/rqt_image_view-master" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/xu/dogkin_ws/install" --install-scripts="/home/xu/dogkin_ws/install/bin"
