int main () {
    int JoMqXrat, M8jKTVcRUtHe = 0, unVL9t;
    char ppFRxX [(1428 - 427)];
    int uSUn4hOLPvj [1001] = {(325 - 325)};
    cin.getline (ppFRxX, 1001);
    unVL9t = strlen (ppFRxX);
    {
        JoMqXrat = 0;
        while (unVL9t > JoMqXrat) {
            if ((!(ppFRxX[JoMqXrat +1] != ppFRxX[JoMqXrat])) || (!(('a' - 'A') != (ppFRxX[JoMqXrat] - ppFRxX[JoMqXrat +1]))) || (!(('A' - 'a') != (ppFRxX[JoMqXrat] - ppFRxX[JoMqXrat +1]))))
                uSUn4hOLPvj[M8jKTVcRUtHe]++;
            else {
                uSUn4hOLPvj[M8jKTVcRUtHe]++;
                M8jKTVcRUtHe = M8jKTVcRUtHe +1;
            }
            JoMqXrat++;
        };
    }
    for (JoMqXrat = 0, M8jKTVcRUtHe = 0; 1001 > JoMqXrat; JoMqXrat++) {
        if (!(0 == uSUn4hOLPvj[JoMqXrat])) {
            cout << '(';
            M8jKTVcRUtHe = M8jKTVcRUtHe +uSUn4hOLPvj[JoMqXrat];
            if (ppFRxX[M8jKTVcRUtHe -uSUn4hOLPvj[JoMqXrat]] >= 'A' && ppFRxX[M8jKTVcRUtHe -uSUn4hOLPvj[JoMqXrat]] <= 'Z')
                cout << ppFRxX[M8jKTVcRUtHe -uSUn4hOLPvj[JoMqXrat]];
            else {
                if (ppFRxX[M8jKTVcRUtHe -uSUn4hOLPvj[JoMqXrat]] >= 'a' && ppFRxX[M8jKTVcRUtHe -uSUn4hOLPvj[JoMqXrat]] <= 'z')
                    cout << (char) (ppFRxX[M8jKTVcRUtHe -uSUn4hOLPvj[JoMqXrat]] - 'a' + 'A');
            }
            cout << ',' << uSUn4hOLPvj[JoMqXrat] << ')';
        };
    }
    return 0;
}

