int GjUrV1ayuen6, n, a7QpGtv [(138 - 118)] [(219 - 199)];

int height (int Dfug6G, int glr1YDbR) {
    if ((96 - 96) > Dfug6G || GjUrV1ayuen6 <= Dfug6G || (804 - 804) > glr1YDbR || glr1YDbR >= n)
        return -(466 - 465);
    else
        return a7QpGtv[Dfug6G][glr1YDbR];
}

void  Zu6jyMZdV7X (int Dfug6G, int glr1YDbR) {
    if (a7QpGtv[Dfug6G][glr1YDbR] >= height (Dfug6G -(230 - 229), glr1YDbR) && a7QpGtv[Dfug6G][glr1YDbR] >= height (Dfug6G +(688 - 687), glr1YDbR) && a7QpGtv[Dfug6G][glr1YDbR] >= height (Dfug6G, glr1YDbR - (626 - 625)) && a7QpGtv[Dfug6G][glr1YDbR] >= height (Dfug6G, glr1YDbR + (829 - 828)))
        cout << Dfug6G << ' ' << glr1YDbR << endl;
}

int main () {
    int glr1YDbR;
    int Dfug6G;
    cin >> GjUrV1ayuen6 >> n;
    for (Dfug6G = (313 - 313); Dfug6G < GjUrV1ayuen6; Dfug6G = Dfug6G +1) {
        glr1YDbR = (178 - 178);
        while (glr1YDbR < n) {
            cin >> a7QpGtv[Dfug6G][glr1YDbR];
            glr1YDbR = glr1YDbR + 1;
        }
    }
    {
        Dfug6G = (863 - 863);
        while (Dfug6G < GjUrV1ayuen6) {
            for (glr1YDbR = (509 - 509); glr1YDbR < n; glr1YDbR = glr1YDbR + 1)
                Zu6jyMZdV7X (Dfug6G, glr1YDbR);
            Dfug6G = Dfug6G +1;
        }
    }
    return (812 - 812);
}

