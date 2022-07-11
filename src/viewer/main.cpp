//
// Created by lazyjazz on 22-7-11.
//

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <cstdio>

using namespace std;

int main() {
    if (!glfwInit()) {
        puts("GLFW Init Failed.");
        return -1;
    }

    auto window = glfwCreateWindow(1280, 720, "BSDF Viewer", nullptr, nullptr);

    if (!window) {
        puts("GLFW create window failed.");
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {

        puts("GLAD init failed.");
        return -1;
    }

    glfwSwapInterval(1);

    while (!glfwWindowShouldClose(window)) {

        glClearColor(0.7, 0.8, 0.9, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);


        glfwSwapBuffers(window);

        glfwPollEvents();
    }

}

