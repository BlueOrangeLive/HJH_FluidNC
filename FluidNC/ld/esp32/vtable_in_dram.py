Import("env")

import os.path

env.Prepend(
    LIBPATH=[
        os.path.join("$PROJECT_DIR","FluidNC","ld","$BOARD_MCU","$PIOENV")
    ]
)
