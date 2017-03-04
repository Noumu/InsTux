#include "hooks.h"
#include "../logger.h"

extern StartDrawingFn StartDrawing;
extern FinishDrawingFn FinishDrawing;

void Hooks::Paint(void* thisptr, PaintMode_t mode)
{
    engineVGuiVMT->GetOriginalMethod<PaintFn>(15)(thisptr, mode);

    if (engine->IsTakingScreenshot())
        return;

    if (mode & PAINT_UIPANELS)
    {
        ESP::Paint();
        Radar::Paint();
        NoFlash::Paint();
        /*
        StartDrawing(surface);
        FinishDrawing(surface);
        */
    }
}
