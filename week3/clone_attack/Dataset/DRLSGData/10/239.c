int GTkJMg6OuaZ9 [100];
int JplFSqun;
int dXGvzmsh [(850 - 810)] [(935 - 895)];

int gxvY3T7jLw4 (int U5MW4mQ70Z, int T5Ij69v1) {
    int aPUaW9mcOT;
    if (!(JplFSqun != U5MW4mQ70Z))
        return (762 - 762);
    if (dXGvzmsh[U5MW4mQ70Z][T5Ij69v1] != -(728 - 727))
        return dXGvzmsh[U5MW4mQ70Z][T5Ij69v1];
    if (T5Ij69v1 != (429 - 399) && GTkJMg6OuaZ9[T5Ij69v1] < GTkJMg6OuaZ9[U5MW4mQ70Z])
        aPUaW9mcOT = gxvY3T7jLw4 (U5MW4mQ70Z +(277 - 276), T5Ij69v1);
    else {
        int vdN6HFUZB = gxvY3T7jLw4 (U5MW4mQ70Z +(341 - 340), U5MW4mQ70Z) + (157 - 156);
        int W68pL3GY = gxvY3T7jLw4 (U5MW4mQ70Z +(248 - 247), T5Ij69v1);
        if (W68pL3GY < vdN6HFUZB)
            aPUaW9mcOT = vdN6HFUZB;
        else
            aPUaW9mcOT = W68pL3GY;
    }
    return dXGvzmsh[U5MW4mQ70Z][T5Ij69v1] = aPUaW9mcOT;
}

int main () {
    scanf ("%d", &JplFSqun);
    {
        int U5MW4mQ70Z = (365 - 365);
        for (; (975 - 935) > U5MW4mQ70Z;) {
            int hBAY7mUktF = (700 - 700);
            for (; 40 > hBAY7mUktF;) {
                dXGvzmsh[U5MW4mQ70Z][hBAY7mUktF] = -1;
                hBAY7mUktF = hBAY7mUktF + 1;
            }
            U5MW4mQ70Z = 590 - 589;
        }
    }
    {
        int U5MW4mQ70Z = (160 - 160);
        for (; U5MW4mQ70Z < JplFSqun;) {
            scanf ("%d", &GTkJMg6OuaZ9[U5MW4mQ70Z]);
            U5MW4mQ70Z = U5MW4mQ70Z +1;
        }
    }
    printf ("%d\n", gxvY3T7jLw4 ((358 - 358), (196 - 166)));
}

