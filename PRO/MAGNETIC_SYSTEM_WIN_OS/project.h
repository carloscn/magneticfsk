<<<<<<< HEAD
#ifndef PROJECT_H
#define PROJECT_H

#include <QInternal>


#define                     CONFIG_BAUDRATE_1200_INDEX             0
#define                     CONFIG_BAUDRATE_2400_INDEX             1
#define                     CONFIG_BAUDRATE_4800_INDEX             2
#define                     CONFIG_BAUDRATE_9600_INDEX             3
#define                     CONFIG_BAUDRATE_19200_INDEX            4
#define                     CONFIG_BAUDRATE_38400_INDEX            5
#define                     CONFIG_BAUDRATE_57600_INDEX            6
#define                     CONFIG_BAUDRATE_115200_INDEX           7

#define                     CONFIG_STOPBIT_ONE_INDEX               0
#define                     CONFIG_STOPBIT_ONEANDHALF_INDEX        1
#define                     CONFIG_STOPBIT_TWO_INDEX               2

#define                     CONFIG_PARITY_NONE_INDEX               0
#define                     CONFIG_PARITY_EVEN_INDEX               1
#define                     CONFIG_PARITY_ODD_INDEX                2
#define                     CONFIG_PARITY_SPACE_INDEX              3
#define                     CONFIG_PARITY_MARK_INDEX               4

#define                     CONFIG_FLOWCTRL_NONE_INDEX             0
#define                     CONFIG_FLOWCTRL_HARD_INDEX             1
#define                     CONFIG_FLOWCTRL_SOFT_INDEX             2

#define                     CONFIG_DATABITS_5_INDEX                 0
#define                     CONFIG_DATABITS_6_INDEX                 1
#define                     CONFIG_DATABITS_7_INDEX                 2
#define                     CONFIG_DATABITS_8_INDEX                 3


typedef struct fskInfoT{
    char value;
    union carryFreqT {
        struct {
            char low;
            char high;
        } bits;
        quint16 all;
    } carryFreqH, carryFreqL;
    char numberPeriod;
    char times;
} FSK_INFO;

#endif // PROJECT_H
=======
#ifndef PROJECT_H
#define PROJECT_H

#include <QInternal>


#define                     CONFIG_BAUDRATE_1200_INDEX             0
#define                     CONFIG_BAUDRATE_2400_INDEX             1
#define                     CONFIG_BAUDRATE_4800_INDEX             2
#define                     CONFIG_BAUDRATE_9600_INDEX             3
#define                     CONFIG_BAUDRATE_19200_INDEX            4
#define                     CONFIG_BAUDRATE_38400_INDEX            5
#define                     CONFIG_BAUDRATE_57600_INDEX            6
#define                     CONFIG_BAUDRATE_115200_INDEX           7

#define                     CONFIG_STOPBIT_ONE_INDEX               0
#define                     CONFIG_STOPBIT_ONEANDHALF_INDEX        1
#define                     CONFIG_STOPBIT_TWO_INDEX               2

#define                     CONFIG_PARITY_NONE_INDEX               0
#define                     CONFIG_PARITY_EVEN_INDEX               1
#define                     CONFIG_PARITY_ODD_INDEX                2
#define                     CONFIG_PARITY_SPACE_INDEX              3
#define                     CONFIG_PARITY_MARK_INDEX               4

#define                     CONFIG_FLOWCTRL_NONE_INDEX             0
#define                     CONFIG_FLOWCTRL_HARD_INDEX             1
#define                     CONFIG_FLOWCTRL_SOFT_INDEX             2

#define                     CONFIG_DATABITS_5_INDEX                 0
#define                     CONFIG_DATABITS_6_INDEX                 1
#define                     CONFIG_DATABITS_7_INDEX                 2
#define                     CONFIG_DATABITS_8_INDEX                 3


typedef struct fskInfoT{
    char value;
    union carryFreqT {
        struct {
            char low;
            char high;
        } bits;
        quint16 all;
    } carryFreqH, carryFreqL;
    char numberPeriod;
    char times;
} FSK_INFO;

#endif // PROJECT_H
>>>>>>> 042423af9c60b07ad04693c227e7c949a956bb54
