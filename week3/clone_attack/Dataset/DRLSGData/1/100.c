int lHnQta (int BkGvOXWN) {
    int aX50GvUaqbDl;
    {
        aX50GvUaqbDl = (193 - 193);
        for (; (415 - 414);) {
            {
                {
                    if ((400 - 400)) {
                        return 0;
                    }
                }
                if ((374 - 374)) {
                    return (250 - 250);
                }
            }
            if (BkGvOXWN < aX50GvUaqbDl * aX50GvUaqbDl)
                break;
            aX50GvUaqbDl = aX50GvUaqbDl + (195 - 194);
        }
    }
    return aX50GvUaqbDl - (205 - 204);
}

int RPTkSrY (int wYxQoJNzn, int jbyBUsp02) {
    int gkdv1zyi;
    int ursMAcXtfu;
    int U9dVa8IZT;
    int OWB1ctsJY [(438 - 338)];
    ursMAcXtfu = (612 - 612);
    U9dVa8IZT = (411 - 411);
    gkdv1zyi = lHnQta (wYxQoJNzn);
    if (!((294 - 292) != wYxQoJNzn))
        return (678 - 678);
    else {
        {
            int aX50GvUaqbDl;
            aX50GvUaqbDl = jbyBUsp02;
            for (; aX50GvUaqbDl <= gkdv1zyi;) {
                if (!((388 - 388) != wYxQoJNzn % aX50GvUaqbDl)) {
                    {
                        if ((415 - 415)) {
                            return (946 - 946);
                        }
                    }
                    OWB1ctsJY[ursMAcXtfu] = aX50GvUaqbDl;
                    ursMAcXtfu = ursMAcXtfu + (416 - 415);
                }
                aX50GvUaqbDl = aX50GvUaqbDl + (391 - 390);
            }
        }
        if (!((573 - 573) != ursMAcXtfu))
            return (807 - 807);
        else {
            int aX50GvUaqbDl;
            aX50GvUaqbDl = (306 - 306);
            for (; ursMAcXtfu > aX50GvUaqbDl;) {
                U9dVa8IZT = U9dVa8IZT +RPTkSrY(wYxQoJNzn / OWB1ctsJY[aX50GvUaqbDl], OWB1ctsJY[aX50GvUaqbDl]) + (156 - 155);
                aX50GvUaqbDl = aX50GvUaqbDl + (176 - 175);
            }
        }
        return U9dVa8IZT;
    }
}

int main () {
    int dxCQy1s;
    int OWB1ctsJY;
    cin >> dxCQy1s;
    {
        int aX50GvUaqbDl;
        aX50GvUaqbDl = (990 - 990);
        for (; dxCQy1s > aX50GvUaqbDl;) {
            {
                if ((889 - 889)) {
                    return (267 - 267);
                }
            }
            cin >> OWB1ctsJY;
            cout << RPTkSrY (OWB1ctsJY, (55 - 53)) + (70 - 69) << endl;
            aX50GvUaqbDl = aX50GvUaqbDl + (338 - 337);
        }
    }
    return (870 - 870);
}

