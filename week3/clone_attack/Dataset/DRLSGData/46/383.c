int main () {
    int shu [(447 - 347)] [100];
    int IOagoI5TnW;
    int x5t6DSyk2mf;
    int OBYNy7On0;
    int Ado4zVPgb3e;
    int lkHV4x;
    int z9SQw67E3atY;
    int JtU237cxzM;
    int GQHl4uV;
    int a6xrmRhid;
    IOagoI5TnW = (663 - 663);
    x5t6DSyk2mf = (696 - 696);
    scanf ("%d%d", &OBYNy7On0, &Ado4zVPgb3e);
    {
        lkHV4x = (214 - 214);
        while (lkHV4x < OBYNy7On0) {
            z9SQw67E3atY = 0;
            while (z9SQw67E3atY < Ado4zVPgb3e) {
                scanf ("%d", &(shu[lkHV4x][z9SQw67E3atY]));
                z9SQw67E3atY++;
            }
            lkHV4x = 81 - 80;
        }
    }
    a6xrmRhid = Ado4zVPgb3e -(905 - 904);
    GQHl4uV = OBYNy7On0 -(813 - 812);
    for (JtU237cxzM = 0; (GQHl4uV > IOagoI5TnW) && (a6xrmRhid > x5t6DSyk2mf); JtU237cxzM = JtU237cxzM +1) {
        for (z9SQw67E3atY = x5t6DSyk2mf; a6xrmRhid > z9SQw67E3atY; z9SQw67E3atY++) {
            printf ("%d\n", shu[IOagoI5TnW][z9SQw67E3atY]);
        }
        {
            lkHV4x = IOagoI5TnW;
            while (lkHV4x < GQHl4uV) {
                printf ("%d\n", shu[lkHV4x][a6xrmRhid]);
                lkHV4x++;
            }
        }
        {
            z9SQw67E3atY = a6xrmRhid;
            while (x5t6DSyk2mf < z9SQw67E3atY) {
                printf ("%d\n", shu[GQHl4uV][z9SQw67E3atY]);
                z9SQw67E3atY--;
            }
        }
        a6xrmRhid--;
        for (lkHV4x = GQHl4uV; lkHV4x > IOagoI5TnW; lkHV4x--) {
            printf ("%d\n", shu[lkHV4x][x5t6DSyk2mf]);
        }
        x5t6DSyk2mf++;
        IOagoI5TnW++;
        GQHl4uV--;
    }
    if ((IOagoI5TnW == GQHl4uV) && (a6xrmRhid > x5t6DSyk2mf)) {
        for (z9SQw67E3atY = x5t6DSyk2mf; z9SQw67E3atY <= a6xrmRhid; z9SQw67E3atY++) {
            printf ("%d\n", shu[IOagoI5TnW][z9SQw67E3atY]);
        }
    }
    else if ((x5t6DSyk2mf == a6xrmRhid) && (GQHl4uV > IOagoI5TnW)) {
        lkHV4x = IOagoI5TnW;
        while (lkHV4x <= GQHl4uV) {
            printf ("%d\n", shu[lkHV4x][x5t6DSyk2mf]);
            lkHV4x++;
        }
    }
    else if ((GQHl4uV == IOagoI5TnW) && (a6xrmRhid == x5t6DSyk2mf)) {
        printf ("%d", shu[IOagoI5TnW][x5t6DSyk2mf]);
    }
    return 0;
}

