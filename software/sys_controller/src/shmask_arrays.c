// RGB Shadow mask presets from ShadowMasks_MiSTer

typedef struct {
    uint8_t iv_x;
    uint8_t iv_y;
    uint16_t v[16][16];
} shmask_data_arr;

const shmask_data_arr shmask_agrille = {.iv_x=3, .iv_y=0, .v={
                                        {0x44c, 0x24c, 0x14c, 0x04c}}};

const shmask_data_arr shmask_tv =      {.iv_x=3, .iv_y=1, .v={
                                        {0x708, 0x44c, 0x24c, 0x14c},
                                        {0x44c, 0x24c, 0x14c, 0x708}}};

const shmask_data_arr shmask_pvm =     {.iv_x=2, .iv_y=3, .v={
                                        {0x42a, 0x72a, 0x72a},
                                        {0x42a, 0x22a, 0x72a},
                                        {0x72a, 0x22a, 0x12a},
                                        {0x42a, 0x72a, 0x12a}}};

const shmask_data_arr shmask_pvm_2530 = {.iv_x=2, .iv_y=3, .v={
                                        {0x44c, 0x00e, 0x00e},
                                        {0x42a, 0x20c, 0x00e},
                                        {0x44c, 0x22a, 0x10c},
                                        {0x00e, 0x20c, 0x12a}}};

const shmask_data_arr shmask_xc_3315c = {.iv_x=5, .iv_y=3, .v={
                                        {0x428, 0x228, 0x12a, 0x72a, 0x72a, 0x72a},
                                        {0x72a, 0x72a, 0x72a, 0x428, 0x228, 0x12a},
                                        {0x42a, 0x22a, 0x128, 0x72a, 0x72a, 0x72a},
                                        {0x72a, 0x72a, 0x72a, 0x42a, 0x22a, 0x128}}};

const shmask_data_arr shmask_c_1084 =  {.iv_x=5, .iv_y=2, .v={
                                        {0x44c, 0x24c, 0x14c, 0x41f, 0x21f, 0x11f},
                                        {0x41f, 0x21f, 0x11f, 0x44c, 0x24c, 0x14c},
                                        {0x44c, 0x24c, 0x14c, 0x44c, 0x24c, 0x14c}}};

const shmask_data_arr shmask_jvc =     {.iv_x=5, .iv_y=5, .v={
                                        {0x43d, 0x23d, 0x13d, 0x03d, 0x03d, 0x03d},
                                        {0x43d, 0x23d, 0x13d, 0x03d, 0x03d, 0x03d},
                                        {0x43d, 0x23d, 0x13d, 0x43d, 0x23d, 0x13d},
                                        {0x43d, 0x23d, 0x13d, 0x43d, 0x23d, 0x13d},
                                        {0x03d, 0x03d, 0x03d, 0x43d, 0x23d, 0x13d},
                                        {0x03d, 0x03d, 0x03d, 0x43d, 0x23d, 0x13d}}};

const shmask_data_arr shmask_vga =     {.iv_x=5, .iv_y=3, .v={
                                        {0x42a, 0x42a, 0x22a, 0x22a, 0x12a, 0x12a},
                                        {0x42a, 0x42a, 0x22a, 0x22a, 0x12a, 0x12a},
                                        {0x22a, 0x12a, 0x12a, 0x42a, 0x42a, 0x22a},
                                        {0x22a, 0x12a, 0x12a, 0x42a, 0x42a, 0x22a}}};
