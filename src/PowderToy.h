#pragma once

void EngineProcess();
void ClipboardPush(ByteString text);
ByteString ClipboardPull();
int GetModifiers();
bool LoadWindowPosition(int scale);
void SetCursorEnabled(int enabled);
unsigned int GetTicks();
