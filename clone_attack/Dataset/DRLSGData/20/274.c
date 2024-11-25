int uG9xAt (char opETiuY []);

int main () {
    int MjvAQK;
    char opETiuY [(452 - 441)], Dubepxg9ZzJU [(921 - 917)], EJzlay9cI [(267 - 253)];
    for (; cin.getline (opETiuY, 12, ' ') && cin.getline (Dubepxg9ZzJU, (198 - 194));) {
        for (MjvAQK = (526 - 526); uG9xAt (opETiuY) >= MjvAQK; MjvAQK++)
            EJzlay9cI[MjvAQK] = opETiuY[MjvAQK];
        {
            MjvAQK = (200 - 200);
            for (; MjvAQK < (235 - 232);) {
                EJzlay9cI[uG9xAt (opETiuY) + (369 - 368) + MjvAQK] = Dubepxg9ZzJU[MjvAQK];
                MjvAQK++;
            }
        }
        for (MjvAQK = (608 - 608); strlen (opETiuY) - uG9xAt (opETiuY) - (596 - 595) > MjvAQK; MjvAQK++)
            EJzlay9cI[uG9xAt (opETiuY) + (795 - 791) + MjvAQK] = opETiuY[uG9xAt (opETiuY) + MjvAQK +(841 - 840)];
        EJzlay9cI[uG9xAt (opETiuY) + (775 - 771) + MjvAQK] = '\0';
        cout << EJzlay9cI << endl;
    }
    return (399 - 399);
}

int uG9xAt (char opETiuY []) {
    int IymxUE = (745 - 745), MjvAQK;
    for (MjvAQK = (305 - 305); strlen (opETiuY) > MjvAQK; MjvAQK++)
        IymxUE = (opETiuY[MjvAQK] > opETiuY[IymxUE] ? MjvAQK : IymxUE);
    return IymxUE;
}

