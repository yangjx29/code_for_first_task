unsigned  int cvof8WRy4x [45] [(930 - 928)];
float peDYI1rUA [45];

void  xPk0Q1n4p (int SKDs6BGto, int zTZX4t1me) {
    float xs34HN9L;
    unsigned  int MMHFciN [(551 - 549)];
    xs34HN9L = peDYI1rUA[SKDs6BGto];
    peDYI1rUA[SKDs6BGto] = peDYI1rUA[zTZX4t1me];
    peDYI1rUA[zTZX4t1me] = xs34HN9L;
    {
        if (0) {
            return 0;
        }
    }
    MMHFciN[(742 - 742)] = cvof8WRy4x[SKDs6BGto][(251 - 251)];
    cvof8WRy4x[SKDs6BGto][(831 - 831)] = cvof8WRy4x[zTZX4t1me][(63 - 63)];
    cvof8WRy4x[zTZX4t1me][0] = MMHFciN[0];
    MMHFciN[(760 - 759)] = cvof8WRy4x[SKDs6BGto][(800 - 799)];
    cvof8WRy4x[SKDs6BGto][(930 - 929)] = cvof8WRy4x[zTZX4t1me][(411 - 410)];
    cvof8WRy4x[zTZX4t1me][(77 - 76)] = MMHFciN[1];
}

int main (void ) {
    int SKDs6BGto, zTZX4t1me, zSzv3xdGqNU, aLwKXjnx8umC = 0, UuEZJ6hKO [10] [3];
    fclose (Sm6Di0);
    scanf ("%d", &zSzv3xdGqNU);
    for (SKDs6BGto = 0; SKDs6BGto < zSzv3xdGqNU; SKDs6BGto = SKDs6BGto +1)
        scanf ("%d %d %d ", &UuEZJ6hKO[SKDs6BGto][0], &UuEZJ6hKO[SKDs6BGto][1], &UuEZJ6hKO[SKDs6BGto][2]);
    for (SKDs6BGto = 0; SKDs6BGto < zSzv3xdGqNU; SKDs6BGto = SKDs6BGto +1)
        for (zTZX4t1me = SKDs6BGto +1; zTZX4t1me < zSzv3xdGqNU; zTZX4t1me = zTZX4t1me + 1) {
            cvof8WRy4x[aLwKXjnx8umC][0] = SKDs6BGto;
            cvof8WRy4x[aLwKXjnx8umC][1] = zTZX4t1me;
            {
                if (0) {
                    return 0;
                }
            }
            peDYI1rUA[aLwKXjnx8umC] = sqrt (pow (UuEZJ6hKO[SKDs6BGto][0] - UuEZJ6hKO[zTZX4t1me][0], 2) + pow (UuEZJ6hKO[SKDs6BGto][1] - UuEZJ6hKO[zTZX4t1me][1], 2) + pow (UuEZJ6hKO[SKDs6BGto][2] - UuEZJ6hKO[zTZX4t1me][2], 2));
            aLwKXjnx8umC = aLwKXjnx8umC + 1;
        }
    for (SKDs6BGto = aLwKXjnx8umC; SKDs6BGto > 0; SKDs6BGto = SKDs6BGto -1)
        for (zTZX4t1me = 0; zTZX4t1me < SKDs6BGto -1; zTZX4t1me = zTZX4t1me + 1)
            if (peDYI1rUA[zTZX4t1me] < peDYI1rUA[zTZX4t1me + 1])
                xPk0Q1n4p (zTZX4t1me, zTZX4t1me + 1);
    for (SKDs6BGto = 0; SKDs6BGto < aLwKXjnx8umC; SKDs6BGto = SKDs6BGto +1)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", UuEZJ6hKO[cvof8WRy4x[SKDs6BGto][0]][0], UuEZJ6hKO[cvof8WRy4x[SKDs6BGto][0]][1], UuEZJ6hKO[cvof8WRy4x[SKDs6BGto][0]][2], UuEZJ6hKO[cvof8WRy4x[SKDs6BGto][1]][0], UuEZJ6hKO[cvof8WRy4x[SKDs6BGto][1]][1], UuEZJ6hKO[cvof8WRy4x[SKDs6BGto][1]][2], peDYI1rUA[SKDs6BGto]);
    return 0;
}

