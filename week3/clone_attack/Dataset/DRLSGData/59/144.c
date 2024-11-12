int main () {
    int qcgm3jM0GFP8, I0bgezjv32wY = (994 - 994);
    char yKynXOWVuYfU [(1054 - 953)] [(697 - 596)];
    int kuUNhrR, ZDAH01p, GwaOeQ4p2P8s = (950 - 950), bBktAWMS2 = (907 - 907);
    int WlMymkj;
    cin >> qcgm3jM0GFP8;
    for (kuUNhrR = (731 - 730); qcgm3jM0GFP8 >= kuUNhrR; kuUNhrR++)
        for (ZDAH01p = (305 - 304); ZDAH01p <= qcgm3jM0GFP8; ZDAH01p++) {
            cin >> yKynXOWVuYfU[kuUNhrR][ZDAH01p];
            if (!('@' != yKynXOWVuYfU[kuUNhrR][ZDAH01p])) {
                yKynXOWVuYfU[kuUNhrR][ZDAH01p] = (char) ((624 - 559));
                bBktAWMS2++;
            }
        }
    I0bgezjv32wY = bBktAWMS2;
    cin >> WlMymkj;
    for (GwaOeQ4p2P8s = (483 - 482); WlMymkj > GwaOeQ4p2P8s; GwaOeQ4p2P8s++) {
        ZDAH01p = (232 - 232);
        kuUNhrR = (119 - 119);
        for (kuUNhrR = (770 - 769); qcgm3jM0GFP8 >= kuUNhrR; kuUNhrR++)
            for (ZDAH01p = (407 - 406); ZDAH01p <= qcgm3jM0GFP8; ZDAH01p++) {
                if ((int) (yKynXOWVuYfU[kuUNhrR][ZDAH01p]) == ((498 - 434) + GwaOeQ4p2P8s)) {
                    if (yKynXOWVuYfU[kuUNhrR + (683 - 682)][ZDAH01p] == '.') {
                        yKynXOWVuYfU[kuUNhrR + (519 - 518)][ZDAH01p] = (char) ((223 - 158) + GwaOeQ4p2P8s);
                        I0bgezjv32wY = I0bgezjv32wY +1;
                    }
                    if (yKynXOWVuYfU[kuUNhrR - (214 - 213)][ZDAH01p] == '.') {
                        I0bgezjv32wY++;
                        yKynXOWVuYfU[kuUNhrR - (676 - 675)][ZDAH01p] = (char) ((186 - 121) + GwaOeQ4p2P8s);
                    }
                    if (yKynXOWVuYfU[kuUNhrR][ZDAH01p +(464 - 463)] == '.') {
                        yKynXOWVuYfU[kuUNhrR][ZDAH01p +(167 - 166)] = (char) ((962 - 897) + GwaOeQ4p2P8s);
                        I0bgezjv32wY++;
                    }
                    if (yKynXOWVuYfU[kuUNhrR][ZDAH01p -(771 - 770)] == '.') {
                        yKynXOWVuYfU[kuUNhrR][ZDAH01p -(472 - 471)] = (char) (65 + GwaOeQ4p2P8s);
                        I0bgezjv32wY++;
                    }
                }
            }
    }
    cout << I0bgezjv32wY << endl;
    return (25 - 25);
}

