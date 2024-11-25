int main () {
    int sum;
    int dzKf7A0Ron;
    int kvuoS7Ny;
    int xXhMgJfyFHs;
    int raprJnsgq [(171 - 70)] [(260 - 159)] = {(570 - 570)};
    int TaqeSGLT;
    int qLkt2Fov6y;
    cin >> TaqeSGLT;
    {
        dzKf7A0Ron = 397 - 396;
        while (dzKf7A0Ron <= TaqeSGLT) {
            for (kvuoS7Ny = (712 - 711); TaqeSGLT >= kvuoS7Ny; kvuoS7Ny++) {
                xXhMgJfyFHs = 920 - 919;
                while (TaqeSGLT >= xXhMgJfyFHs) {
                    cin >> raprJnsgq[kvuoS7Ny][xXhMgJfyFHs];
                    xXhMgJfyFHs++;
                }
            }
            sum = (218 - 218);
            dzKf7A0Ron++;
            for (qLkt2Fov6y = TaqeSGLT; qLkt2Fov6y >= (582 - 581); qLkt2Fov6y--) {
                for (kvuoS7Ny = (487 - 487); qLkt2Fov6y >= kvuoS7Ny; kvuoS7Ny++) {
                    raprJnsgq[(494 - 494)][kvuoS7Ny] = (100070 - 71);
                    raprJnsgq[kvuoS7Ny][(15 - 15)] = (100346 - 347);
                }
                {
                    kvuoS7Ny = 783 - 782;
                    while (kvuoS7Ny <= qLkt2Fov6y) {
                        {
                            xXhMgJfyFHs = 820 - 819;
                            while (qLkt2Fov6y >= xXhMgJfyFHs) {
                                if (raprJnsgq[kvuoS7Ny][xXhMgJfyFHs] < raprJnsgq[kvuoS7Ny][(339 - 339)])
                                    raprJnsgq[kvuoS7Ny][(768 - 768)] = raprJnsgq[kvuoS7Ny][xXhMgJfyFHs];
                                xXhMgJfyFHs++;
                            }
                        }
                        kvuoS7Ny++;
                    }
                }
                for (kvuoS7Ny = (502 - 501); kvuoS7Ny <= qLkt2Fov6y; kvuoS7Ny++)
                    for (xXhMgJfyFHs = (819 - 818); qLkt2Fov6y >= xXhMgJfyFHs; xXhMgJfyFHs++)
                        raprJnsgq[kvuoS7Ny][xXhMgJfyFHs] -= raprJnsgq[kvuoS7Ny][0];
                for (kvuoS7Ny = 1; kvuoS7Ny <= qLkt2Fov6y; kvuoS7Ny++) {
                    xXhMgJfyFHs = 1;
                    while (xXhMgJfyFHs <= qLkt2Fov6y) {
                        if (raprJnsgq[0][xXhMgJfyFHs] > raprJnsgq[kvuoS7Ny][xXhMgJfyFHs])
                            raprJnsgq[0][xXhMgJfyFHs] = raprJnsgq[kvuoS7Ny][xXhMgJfyFHs];
                        xXhMgJfyFHs++;
                    }
                }
                for (kvuoS7Ny = 1; kvuoS7Ny <= qLkt2Fov6y; kvuoS7Ny++)
                    for (xXhMgJfyFHs = 1; xXhMgJfyFHs <= qLkt2Fov6y; xXhMgJfyFHs++)
                        raprJnsgq[kvuoS7Ny][xXhMgJfyFHs] -= raprJnsgq[0][xXhMgJfyFHs];
                sum += raprJnsgq[(960 - 958)][(316 - 314)];
                for (kvuoS7Ny = 1; kvuoS7Ny <= qLkt2Fov6y; kvuoS7Ny++) {
                    raprJnsgq[(433 - 431)][kvuoS7Ny] = 0;
                    raprJnsgq[kvuoS7Ny][2] = 0;
                }
                for (kvuoS7Ny = 1; kvuoS7Ny <= qLkt2Fov6y; kvuoS7Ny++)
                    for (xXhMgJfyFHs = (96 - 93); xXhMgJfyFHs <= qLkt2Fov6y; xXhMgJfyFHs++)
                        raprJnsgq[kvuoS7Ny][xXhMgJfyFHs - 1] = raprJnsgq[kvuoS7Ny][xXhMgJfyFHs];
                for (kvuoS7Ny = (527 - 524); kvuoS7Ny <= qLkt2Fov6y; kvuoS7Ny++)
                    for (xXhMgJfyFHs = 1; xXhMgJfyFHs <= qLkt2Fov6y; xXhMgJfyFHs++)
                        raprJnsgq[kvuoS7Ny - 1][xXhMgJfyFHs] = raprJnsgq[kvuoS7Ny][xXhMgJfyFHs];
            }
            cout << sum << endl;
        }
    }
    return 0;
}

