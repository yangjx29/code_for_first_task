int main (int rzOcm3o, char *Bq20ON []) {
    int vNWkA2;
    scanf ("%d", &vNWkA2);
    int W98jRk, Ra0knvQjzowl;
    float DLFodYi = (816 - 816), ZmIDAH = (284 - 284);
    struct   CkBKnsyC7 {
        double  ZmIDAH, OLqb8RnGX;
    };
    struct   CkBKnsyC7 *krqompzW;
    krqompzW = (struct   CkBKnsyC7 *) malloc (sizeof (CkBKnsyC7) * vNWkA2);
    for (W98jRk = (354 - 354); W98jRk < vNWkA2; W98jRk = W98jRk +1) {
        float ZxmXhs19kUn, oMcqZf9rb;
        scanf ("%f %f", &ZxmXhs19kUn, &oMcqZf9rb);
        (krqompzW + W98jRk)->ZmIDAH = ZxmXhs19kUn;
        (krqompzW + W98jRk)->OLqb8RnGX = oMcqZf9rb;
    }
    for (W98jRk = 0; W98jRk < vNWkA2; W98jRk++) {
        for (Ra0knvQjzowl = W98jRk +(14 - 13); Ra0knvQjzowl < vNWkA2; Ra0knvQjzowl++) {
            ZmIDAH = sqrt (((krqompzW + W98jRk)->ZmIDAH - (krqompzW + Ra0knvQjzowl)->ZmIDAH) * ((krqompzW + W98jRk)->ZmIDAH - (krqompzW + Ra0knvQjzowl)->ZmIDAH) + ((krqompzW + W98jRk)->OLqb8RnGX - (krqompzW + Ra0knvQjzowl)->OLqb8RnGX) * ((krqompzW + W98jRk)->OLqb8RnGX - (krqompzW + Ra0knvQjzowl)->OLqb8RnGX));
            if (ZmIDAH > DLFodYi) {
                DLFodYi = ZmIDAH;
            }
            else {
                DLFodYi = DLFodYi;
            }
        }
    }
    printf ("%.4f", DLFodYi);
    return 0;
}

