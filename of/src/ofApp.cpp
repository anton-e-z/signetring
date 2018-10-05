#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    // Set a neutral background color
    ofBackground(50);

    // Load svg
    svgIn.load("/home/anton/svgtest.svg");


}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
    //cout << svgIn.getNumPath();
    ofNoFill();
    ofSetColor(255);
    ofDrawRectangle(50, 50, 100, 100);
    ofPath pathIn = svgIn.getPathAt(0);
    pathIn.draw(400, 400);
    ofPolyline pl = pathIn.getOutline()[0].getVertices();
    for ( auto &vert : pl.getVertices() )
    {
       
    } 
    pl.draw();


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y )
{

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{

}


//--------------------------------------------------------------
int ofApp::openFile()
{
	ofFileDialogResult openResult = ofSystemLoadDialog("Select an .svg file.");
    string filePath = openResult.getPath();

    return 0;
}
