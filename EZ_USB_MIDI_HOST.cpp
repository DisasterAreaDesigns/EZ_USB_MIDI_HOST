/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2025 rppicomidi, DisasterAreaDesigns
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "EZ_USB_MIDI_HOST.h"

// This file intentionally left mostly empty.
// The TinyUSB callbacks (tuh_midi_mount_cb, tuh_midi_umount_cb, tuh_midi_rx_cb)
// are defined by the RPPICOMIDI_EZ_USB_MIDI_HOST_INSTANCE macro in the user's sketch.
// 
// Previous versions of this library defined these callbacks here, but with the
// migration to built-in TinyUSB MIDI host, they must be defined in the sketch
// to properly link to the specific instance created by the macro.