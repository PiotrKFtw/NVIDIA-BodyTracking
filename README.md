# NVIDIA BodyTracking SteamVR Driver

![Powered By: NVIDIA RTX](https://user-images.githubusercontent.com/29297318/159997280-2131e876-42bd-4c8b-9472-7c88c6c7ba60.png)

----

## Requirements

* Windows OS
* NVIDIA RTX GPU, 20-series or 30-series
* Any camera that can be linked to your computer for realtime capture, *i.e.* a webcam, mobile device, or go-pro
  * *The quality of this device is unimportant, but the better the camera, the better the tracking results*
* Installation of the [NVIDIA Broadcast AR SDK](https://www.nvidia.com/en-us/geforce/broadcasting/broadcast-sdk/resources/) ([20-series](https://international.download.nvidia.com/Windows/broadcast/sdk/v0.7.6/nvidia_ar_sdk_installer_turing.exe) | [30-series](https://international.download.nvidia.com/Windows/broadcast/sdk/0.7.6/nvidia_ar_sdk_installer_ampere.exe))

---

This is a **WIP** driver designed to use the NVIDIA AR SDK for camera-based body tracking.
For now, most of the code is based on the [AR SDK examples](https://github.com/NVIDIA/MAXINE-AR-SDK), [Mediapipe-VR-Fullbody-Tracking](https://github.com/ju1ce/Mediapipe-VR-Fullbody-Tracking), and [driver_kinectV2](https://github.com/SDraw/driver_kinectV2/blob/master/driver_kinectV2)

https://user-images.githubusercontent.com/29297318/160537122-21e5f4ce-0a91-44e1-828c-0a6ca8b94717.mp4

[Discord Server](https://discord.gg/XjkyuwRW6Z)


Current keybinds can be found in the vrserver.txt log, but here are the current bindings
![image](https://user-images.githubusercontent.com/29297318/160949112-6ada034d-ef79-4208-ae32-474c637a7785.png)

----

In order to use any of the executables, you are required to download and install the [NVIDIA Broadcast AR SDK](https://www.nvidia.com/en-us/geforce/broadcasting/broadcast-sdk/resources/).
*(Note: As of right now, it works only on RTX 20 and 30 series cards. Other cards are untested)*

NVIDIA Library used: [MAXINE AR SDK](https://github.com/NVIDIA/MAXINE-AR-SDK)

Additional libraries used:

1. [OpenCV](https://github.com/opencv/opencv) for image/video capture
2. [SimpleIni](https://github.com/brofield/simpleini) for the configuration file
3. [glm](https://github.com/g-truc/glm) for OpenGL maths
