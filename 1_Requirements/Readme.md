<!DOCTYPE html>
<!-- saved from url=(0021)https://dillinger.io/ -->
<html lang="en" ng-strict-di=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style type="text/css">@charset "UTF-8";[ng\:cloak],[ng-cloak],[data-ng-cloak],[x-ng-cloak],.ng-cloak,.x-ng-cloak,.ng-hide:not(.ng-hide-animate){display:none !important;}ng\:form{display:block;}.ng-animate-shim{visibility:hidden;}.ng-anchor{position:absolute;}</style>

<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
<title>Online Markdown Editor - Dillinger, the Last Markdown Editor ever.</title>
<meta name="description" content="Dillinger is an online cloud based HTML5 filled
  Markdown Editor. Sync with Dropbox, Github, Google Drive or OneDrive.
  Convert HTML to Markdown. 100% Open Source!">
<meta name="keywords" content="Markdown, Dillinger, Editor, ACE, Github, Open Source, Node.js">
<meta name="author" content="Joe McCann and Martin Broder">
<link rel="apple-touch-icon" href="https://dillinger.io/apple-touch-icon.png">


<meta name="robots" content="noodp, noydir">

<meta name="google-site-verification" content="DAyGOgtsg8rJpq9VVktKzDkQ1UhXm1FYl8SD47hPkjA">

<meta name="viewport" content="width=device-width, initial-scale=1, user-scalable=no, maximum-scale=1, minimum-scale=1">
<meta name="HandheldFriendly" content="true">
<meta name="MobileOptimized" content="320">
<meta http-equiv="cleartype" content="on">
<link href="./Readme_files/css" rel="stylesheet" type="text/css">
<link href="./Readme_files/css(1)" rel="stylesheet" type="text/css">
<link href="./Readme_files/app.css" rel="stylesheet">
<script type="text/javascript">
   var trackOutboundLink = function(url) {
    ga('send', 'event', 'outbound', 'click', url, {
      'transport': 'beacon',
      'hitCallback': function(){window.open(url);}
    });
    }
  </script>
<div id="_bsa_srv-CVADP53W_0"></div><style id="ace_editor.css">.ace_editor {position: relative;overflow: hidden;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;text-align: left;-webkit-tap-highlight-color: rgba(0, 0, 0, 0);}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;min-width: 100%;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;text-indent: -1em;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: inherit;color: inherit;z-index: 1000;opacity: 1;text-indent: 0;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;}.ace_text-layer {font: inherit !important;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {-webkit-transition: opacity 0.18s;transition: opacity 0.18s;}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;}.ace_line .ace_fold {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: -webkit-linear-gradient(top, transparent, rgba(0, 0, 0, 0.1));background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {-webkit-transition: opacity 0.4s ease 0.05s;transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {-webkit-transition: opacity 0.05s ease 0.05s;transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}.ace_text-input-ios {position: absolute !important;top: -100000px !important;left: -100000px !important;}
/*# sourceURL=ace/css/ace_editor.css */</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style><script src="./Readme_files/theme-github.js.download"></script></head>
<body ng-controller="Base" file-import-drop-target="" class="ng-scope" style="overflow: hidden;">
<input type="file" accept=".md,.markdown,text/html" file-import-choose-file="" style="display: none;">
<form method="POST" id="downloader" class="ng-pristine ng-valid">
<input type="hidden" name="name" autocomplete="off">
<input type="hidden" name="unmd" autocomplete="off">
<input type="hidden" name="formatting" autocomplete="off">
<input type="hidden" name="preview" autocomplete="off">
</form>

<ul class="settings ng-scope" role="menu" ng-controller="User as user">
<li>
<a ng-click="user.toggleAutoSave($event)">
<span class="has-checkbox">Auto Save</span>
<span class="toggle-auto-save switch ng-isolate-scope checked" ng-class="{checked: toggleValue}" value="user.profile.enableAutoSave">
  <input type="checkbox" ng-model="toggleValue" class="ng-pristine ng-untouched ng-valid ng-not-empty">
  <small></small>
</span>
</a>
</li>
<li>
<a ng-click="user.toggleWordsCount($event)">
<span class="has-checkbox">Word Count</span>
<span class="toggle-word-count switch ng-isolate-scope checked" ng-class="{checked: toggleValue}" value="user.profile.enableWordsCount">
  <input type="checkbox" ng-model="toggleValue" class="ng-pristine ng-untouched ng-valid ng-not-empty">
  <small></small>
</span>
</a>
</li>
<li>
<a ng-click="user.toggleCharactersCount($event)">
<span class="has-checkbox">Character Count</span>
<span class="toggle-character-count switch ng-isolate-scope checked" ng-class="{checked: toggleValue}" value="user.profile.enableCharactersCount">
  <input type="checkbox" ng-model="toggleValue" class="ng-pristine ng-untouched ng-valid ng-not-empty">
  <small></small>
</span>
</a>
</li>
<li>
<a ng-click="user.toggleScrollSync($event)">
<span class="has-checkbox">Scroll Sync</span>
<span class="toggle-scroll-sync switch ng-isolate-scope" ng-class="{checked: toggleValue}" value="user.profile.enableScrollSync">
  <input type="checkbox" ng-model="toggleValue" class="ng-pristine ng-untouched ng-valid ng-empty">
  <small></small>
</span>
</a>
</li>
<li>
<a><form class="ng-pristine ng-valid ng-valid-min">
<span>Tab Size</span>
<input type="number" ng-model="tabsize" min="1" ng-change="user.storeTabSize()" class="ng-pristine ng-untouched ng-valid ng-not-empty ng-valid-min">
</form></a>
</li>
<li>
<a><form class="ng-pristine ng-valid">
<span>Keybindings</span>
<select ng-model="keybindings" ng-change="user.storeKeybindings()" class="ng-pristine ng-untouched ng-valid ng-not-empty">
<!-- ngRepeat: (key, value) in allKeybindings --><option ng-repeat="(key, value) in allKeybindings" value="Ace" class="ng-binding ng-scope" selected="selected">Ace</option><!-- end ngRepeat: (key, value) in allKeybindings --><option ng-repeat="(key, value) in allKeybindings" value="Vim" class="ng-binding ng-scope">Vim</option><!-- end ngRepeat: (key, value) in allKeybindings --><option ng-repeat="(key, value) in allKeybindings" value="Emacs" class="ng-binding ng-scope">Emacs</option><!-- end ngRepeat: (key, value) in allKeybindings -->
</select>
</form></a>
</li>

<li>
<a target="_blank" href="https://www.markdownguide.org/">
<span>Markdown Help</span>
</a>
</li>
<li>
<a class="toggle-wtf" ng-click="user.showAbout($event)">
<span>WTF is Dillinger?</span>
</a>
</li>
<li>
<a class="toggle-reset" ng-click="user.resetProfile($event)">
<span>Reset Profile</span>
</a>
</li>
</ul>
<div class="wrapper">
<div class="sidebar-wrapper">
<div class="sidebar ng-scope" ng-controller="Documents as document">
<h2 class="sidebar-branding">
<svg viewBox="0 0 85 11" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g id="Desktop---Save-to" sketch:type="MSArtboardGroup" transform="translate(-92.000000, -58.000000)" fill="#FFFFFF">
<g id="Navigation" sketch:type="MSLayerGroup" transform="translate(0.000000, 38.000000)">
<g id="Menu-Item:-Branding" transform="translate(91.000000, 17.000000)" sketch:type="MSShapeGroup">
<path d="M1.17,13 L4.563,13 C7.423,13 9.399,11.011 9.399,8.45 L9.399,8.424 C9.399,5.863 7.423,3.9 4.563,3.9 L1.17,3.9 L1.17,13 Z M2.769,11.544 L2.769,5.356 L4.563,5.356 C6.474,5.356 7.722,6.669 7.722,8.45 L7.722,8.476 C7.722,10.257 6.474,11.544 4.563,11.544 L2.769,11.544 Z M13.047,13 L14.646,13 L14.646,3.9 L13.047,3.9 L13.047,13 Z M18.697,13 L25.08,13 L25.08,11.544 L20.296,11.544 L20.296,3.9 L18.697,3.9 L18.697,13 Z M28.364,13 L34.747,13 L34.747,11.544 L29.963,11.544 L29.963,3.9 L28.364,3.9 L28.364,13 Z M38.122,13 L39.721,13 L39.721,3.9 L38.122,3.9 L38.122,13 Z M43.772,13 L45.345,13 L45.345,6.526 L50.363,13 L51.702,13 L51.702,3.9 L50.129,3.9 L50.129,10.192 L45.254,3.9 L43.772,3.9 L43.772,13 Z M59.978,13.156 C61.59,13.156 62.877,12.506 63.774,11.739 L63.774,7.917 L59.9,7.917 L59.9,9.308 L62.227,9.308 L62.227,11.011 C61.668,11.427 60.888,11.7 60.03,11.7 C58.171,11.7 56.936,10.322 56.936,8.45 L56.936,8.424 C56.936,6.682 58.21,5.213 59.887,5.213 C61.044,5.213 61.733,5.59 62.435,6.188 L63.449,4.979 C62.513,4.186 61.538,3.744 59.952,3.744 C57.209,3.744 55.259,5.902 55.259,8.45 L55.259,8.476 C55.259,11.128 57.131,13.156 59.978,13.156 Z M67.474,13 L74.286,13 L74.286,11.57 L69.073,11.57 L69.073,9.126 L73.636,9.126 L73.636,7.696 L69.073,7.696 L69.073,5.33 L74.221,5.33 L74.221,3.9 L67.474,3.9 L67.474,13 Z M77.804,13 L79.403,13 L79.403,9.828 L81.405,9.828 L83.641,13 L85.526,13 L83.069,9.555 C84.343,9.191 85.24,8.294 85.24,6.799 L85.24,6.773 C85.24,5.98 84.967,5.304 84.486,4.81 C83.901,4.238 83.004,3.9 81.86,3.9 L77.804,3.9 L77.804,13 Z M79.403,8.411 L79.403,5.356 L81.73,5.356 C82.913,5.356 83.615,5.889 83.615,6.864 L83.615,6.89 C83.615,7.813 82.887,8.411 81.743,8.411 L79.403,8.411 Z" id="DILLINGER-2"></path>
</g>
</g>
</g>
</g>
</svg>
</h2>
<nav class="nav nav-sidebar">
<ul class="menu menu-sidebar">
<li class="menu-item menu-item--link-unlink in-sidebar">
<a class="menu-link" ng-click="document.status.linkUnlink = !document.status.linkUnlink">
<span>Services</span> <span class="caret"></span></a>
<ul class="sidebar-list collapse" collapse="document.status.linkUnlink" style="height: 0px;">
<li>
<a href="https://dillinger.io/redirect/dropbox" class="import-dropbox unlinked">Link with
<span>Dropbox</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Bitbucket as bitbucket" class="ng-scope">
<a class="import-bitbucket unlinked" href="https://dillinger.io/redirect/bitbucket">Link with
<span>Bitbucket</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Github as github" class="ng-scope">
<a class="import-github unlinked" ng-click="github.chooseScope()">Link with
<span>Github</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li>
<a href="https://dillinger.io/redirect/medium" class="import-medium unlinked">Link with
<span>Medium</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li>
<a href="https://dillinger.io/redirect/googledrive" class="import-google-drive unlinked">Link with
<span>Google Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li>
<a href="https://dillinger.io/redirect/onedrive" class="import-one-drive unlinked">Link with
<span>One Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
</ul>
</li>
<li class="menu-item menu-item--save-to in-sidebar">
<a class="menu-link" ng-click="document.status.save = !document.status.save">
<span>Save to</span> <span class="caret"></span></a>
<ul class="sidebar-list collapse" collapse="document.status.save" style="height: 0px;">
<li ng-controller="Dropbox as dropbox" class="ng-scope">
<a href="https://dillinger.io/redirect/dropbox" class="import-dropbox unlinked">
<span>Dropbox</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>

<li ng-controller="Github as github" class="ng-scope">
<a class="import-github unlinked" ng-click="github.chooseScope()">
<span>Github</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Medium as medium" class="ng-scope">
<a href="https://dillinger.io/redirect/medium" class="import-medium unlinked">
<span>Medium</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Googledrive as googledrive" class="ng-scope">
<a href="https://dillinger.io/redirect/googledrive" class="import-google-drive unlinked">
<span>Google Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Onedrive as onedrive" class="ng-scope">
<a href="https://dillinger.io/redirect/onedrive" class="import-one-drive unlinked">
<span>One Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
</ul>
</li>
<li class="menu-item menu-item--import-from in-sidebar">
<a class="menu-link" ng-click="document.status.import = !document.status.import">
<span>Import from</span> <span class="caret"></span></a>
<ul class="sidebar-list collapse" collapse="document.status.import" style="height: 0px;">
<li ng-controller="Dropbox as dropbox" class="ng-scope">
<a href="https://dillinger.io/redirect/dropbox" class="import-dropbox unlinked">
<span>Dropbox</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Bitbucket as bitbucket" class="ng-scope">
<a class="import-bitbucket unlinked" href="https://dillinger.io/redirect/bitbucket">
<span>Bitbucket</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Github as github" class="ng-scope">
<a class="import-github unlinked" ng-click="github.chooseScope()">
<span>Github</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Googledrive as googledrive" class="ng-scope">
<a href="https://dillinger.io/redirect/googledrive" class="import-google-drive unlinked">
<span>Google Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Onedrive as onedrive" class="ng-scope">
<a href="https://dillinger.io/redirect/onedrive" class="import-one-drive unlinked">
<span>One Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="ImportFile as importFile" class="ng-scope">
<a class="linked" ng-click="choose()">
<span>Markdown File</span>
</a>
</li>
<li ng-controller="ImportFile as importFile" class="ng-scope">
<a class="linked" ng-click="choose(&#39;html&#39;)">
<span>HTML File</span>
</a>
</li>
</ul>
</li>
<li class="menu-item menu-item--documents in-sidebar">
<a class="menu-link" ng-click="document.status.document = !document.status.document">
<span>Documents</span> <span class="caret"></span></a>
<ul class="documents sidebar-list collapse in" collapse="document.status.document" role="menu" style="height: auto;">
<!-- ngRepeat: document in documents track by document.id --><li ng-repeat="document in documents track by document.id" ng-class="{
    &#39;active&#39;: currentDocument.id === document.id,
    &#39;octocat&#39;: document.isGithubFile
    }" class="ng-scope active">
<a ng-click="selectDocument(document)" class="ng-binding">Introduction.md</a>
</li><!-- end ngRepeat: document in documents track by document.id -->
</ul>
</li>
</ul>
</nav>
<a class="btn btn--new" ng-click="createDocument()">New Document</a>
<a class="btn btn--save" ng-click="saveDocument(true)">Save Session</a>
<!-- ngIf: documents.length > 1 -->
</div>
</div>
<div class="notification-container">
<div class="notification"></div>
</div>
<div class="page">
<div class="navbar">
<a class="toggle">
  <span></span>
</a>
<h1 class="navbar-brand">
<a class="brand" href="https://dillinger.io/"><svg viewBox="0 0 85 11" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g id="Desktop---Save-to" sketch:type="MSArtboardGroup" transform="translate(-92.000000, -58.000000)" fill="#FFFFFF">
<g id="Navigation" sketch:type="MSLayerGroup" transform="translate(0.000000, 38.000000)">
<g id="Menu-Item:-Branding" transform="translate(91.000000, 17.000000)" sketch:type="MSShapeGroup">
<path d="M1.17,13 L4.563,13 C7.423,13 9.399,11.011 9.399,8.45 L9.399,8.424 C9.399,5.863 7.423,3.9 4.563,3.9 L1.17,3.9 L1.17,13 Z M2.769,11.544 L2.769,5.356 L4.563,5.356 C6.474,5.356 7.722,6.669 7.722,8.45 L7.722,8.476 C7.722,10.257 6.474,11.544 4.563,11.544 L2.769,11.544 Z M13.047,13 L14.646,13 L14.646,3.9 L13.047,3.9 L13.047,13 Z M18.697,13 L25.08,13 L25.08,11.544 L20.296,11.544 L20.296,3.9 L18.697,3.9 L18.697,13 Z M28.364,13 L34.747,13 L34.747,11.544 L29.963,11.544 L29.963,3.9 L28.364,3.9 L28.364,13 Z M38.122,13 L39.721,13 L39.721,3.9 L38.122,3.9 L38.122,13 Z M43.772,13 L45.345,13 L45.345,6.526 L50.363,13 L51.702,13 L51.702,3.9 L50.129,3.9 L50.129,10.192 L45.254,3.9 L43.772,3.9 L43.772,13 Z M59.978,13.156 C61.59,13.156 62.877,12.506 63.774,11.739 L63.774,7.917 L59.9,7.917 L59.9,9.308 L62.227,9.308 L62.227,11.011 C61.668,11.427 60.888,11.7 60.03,11.7 C58.171,11.7 56.936,10.322 56.936,8.45 L56.936,8.424 C56.936,6.682 58.21,5.213 59.887,5.213 C61.044,5.213 61.733,5.59 62.435,6.188 L63.449,4.979 C62.513,4.186 61.538,3.744 59.952,3.744 C57.209,3.744 55.259,5.902 55.259,8.45 L55.259,8.476 C55.259,11.128 57.131,13.156 59.978,13.156 Z M67.474,13 L74.286,13 L74.286,11.57 L69.073,11.57 L69.073,9.126 L73.636,9.126 L73.636,7.696 L69.073,7.696 L69.073,5.33 L74.221,5.33 L74.221,3.9 L67.474,3.9 L67.474,13 Z M77.804,13 L79.403,13 L79.403,9.828 L81.405,9.828 L83.641,13 L85.526,13 L83.069,9.555 C84.343,9.191 85.24,8.294 85.24,6.799 L85.24,6.773 C85.24,5.98 84.967,5.304 84.486,4.81 C83.901,4.238 83.004,3.9 81.86,3.9 L77.804,3.9 L77.804,13 Z M79.403,8.411 L79.403,5.356 L81.73,5.356 C82.913,5.356 83.615,5.889 83.615,6.864 L83.615,6.89 C83.615,7.813 82.887,8.411 81.743,8.411 L79.403,8.411 Z" id="DILLINGER-2"></path>
</g>
</g>
</g>
</g>
</svg>
</a>
</h1>
<div class="ad-container">
</div>
<nav class="nav nav-right">
<ul class="menu menu-utilities">
<li class="menu-item menu-item--export-as has-dropdown" dropdown="">
<a class="dropdown-toggle" dropdown-toggle="" aria-haspopup="true" aria-expanded="false">Preview as <span class="caret"></span></a>
<ul class="dropdown dropdown-menu ng-scope" role="menu" ng-controller="DocumentsExport as export" di-target="preview">
<li>
<a ng-click="export.asHTML()" class="export-html">HTML</a>
</li>
<li>
<a ng-click="export.asStyledHTML()" class="export-styled_html">Styled HTML</a>
</li>
<li>
<a ng-click="export.asMarkdown()" class="export-md">Markdown</a>
</li>
<li>
<a ng-click="export.asPDF()" class="export-pdf">PDF</a>
</li>
</ul>
</li>
<li class="menu-item menu-item--export-as has-dropdown" dropdown="">
<a class="dropdown-toggle" dropdown-toggle="" aria-haspopup="true" aria-expanded="false">Export as <span class="caret"></span></a>
<ul class="dropdown dropdown-menu ng-scope" role="menu" ng-controller="DocumentsExport as export" di-target="_top">
<li>
<a ng-click="export.asHTML()" class="export-html">HTML</a>
</li>
<li>
<a ng-click="export.asStyledHTML()" class="export-styled_html">Styled HTML</a>
</li>
<li>
<a ng-click="export.asMarkdown()" class="export-md">Markdown</a>
</li>
<li>
<a ng-click="export.asPDF()" class="export-pdf">PDF</a>
</li>
</ul>
</li>
<li class="menu-item menu-item--save-to has-dropdown" dropdown="">
<a class="dropdown-toggle" dropdown-toggle="" aria-haspopup="true" aria-expanded="false">Save to <span class="caret"></span></a>
<ul class="dropdown dropdown-menu" role="menu">
<li ng-controller="Dropbox as dropbox" class="ng-scope">
<a href="https://dillinger.io/redirect/dropbox" class="import-dropbox unlinked">
<span>Dropbox</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>

<li ng-controller="Github as github" class="ng-scope">
<a class="import-github unlinked" ng-click="github.chooseScope()">
<span>Github</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Medium as medium" class="ng-scope">
<a href="https://dillinger.io/redirect/medium" class="import-medium unlinked">
<span>Medium</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Googledrive as googledrive" class="ng-scope">
<a href="https://dillinger.io/redirect/googledrive" class="import-google-drive unlinked">
<span>Google Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Onedrive as onedrive" class="ng-scope">
<a href="https://dillinger.io/redirect/onedrive" class="import-one-drive unlinked">
<span>One Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
</ul>
</li>
<li class="menu-item menu-item--import-from has-dropdown" dropdown="">
<a class="dropdown-toggle" dropdown-toggle="" aria-haspopup="true" aria-expanded="false">Import from <span class="caret"></span></a>
<ul class="dropdown dropdown-menu" role="menu">
<li ng-controller="Dropbox as dropbox" class="ng-scope">
<a href="https://dillinger.io/redirect/dropbox" class="import-dropbox unlinked">
<span>Dropbox</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Bitbucket as bitbucket" class="ng-scope">
<a class="import-bitbucket unlinked" href="https://dillinger.io/redirect/bitbucket">
<span>Bitbucket</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Github as github" class="ng-scope">
<a class="import-github unlinked" ng-click="github.chooseScope()">
<span>Github</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Googledrive as googledrive" class="ng-scope">
<a href="https://dillinger.io/redirect/googledrive" class="import-google-drive unlinked">
<span>Google Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="Onedrive as onedrive" class="ng-scope">
<a href="https://dillinger.io/redirect/onedrive" class="import-one-drive unlinked">
<span>One Drive</span>
<span class="icon icon-link"><svg viewBox="0 0 16 16" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g sketch:type="MSArtboardGroup" transform="translate(-238.000000, -212.000000)" fill="#FFFFFF">
<g sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g transform="translate(0.000000, 75.000000)" sketch:type="MSShapeGroup">
<g transform="translate(32.000000, 72.000000)">
<g transform="translate(206.000000, 0.000000)">
<path d="M15.0962672,6.56194892 L10.8290766,10.8291395 C9.6502947,12.0079214 7.74066798,12.0079214 6.56188605,10.8291395 L5.13948919,9.40674263 L6.56188605,7.98434578 L7.98428291,9.40674263 C8.37721022,9.79869548 9.01472692,9.79966994 9.40667976,9.40674263 L13.6738703,5.13955206 C14.0658232,4.7471277 14.0658232,4.10910806 13.6738703,3.71665226 L12.2514735,2.2942554 C11.8595206,1.90230255 11.2210295,1.90230255 10.8290766,2.2942554 L9.30549312,3.8178389 C8.59919843,3.40231041 7.79665226,3.22401572 7.00196464,3.27754813 L9.40667976,0.871858546 C10.5854617,-0.306420432 12.4960629,-0.306420432 13.6738703,0.871858546 L15.0962672,2.2942554 C16.2750491,3.47256582 16.2750491,5.38366994 15.0962672,6.56194892 L15.0962672,6.56194892 Z M6.66209823,12.1513242 L5.13948919,13.6739332 C4.74656189,14.0668605 4.10904519,14.0658861 3.71709234,13.6739332 L2.29469548,12.2515363 C1.90176817,11.8595835 1.90176817,11.2220668 2.29469548,10.8291395 L6.56188605,6.56194892 C6.9538389,6.16999607 7.59233006,6.16999607 7.98428291,6.56194892 L9.40667976,7.98434578 L10.8290766,6.56194892 L9.40667976,5.13955206 C8.22789784,3.96127308 6.31827112,3.96127308 5.13948919,5.13955206 L0.872298625,9.40674263 C-0.306483301,10.5855246 -0.306483301,12.4961257 0.872298625,13.6739332 L2.29469548,15.0963301 C3.47250295,16.275112 5.38310413,16.275112 6.56188605,15.0963301 L8.96660118,12.6916149 C8.17191356,12.7446444 7.37131631,12.5658782 6.66209823,12.1513242 L6.66209823,12.1513242 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</g>
</svg>
</span>
</a>
</li>
<li ng-controller="ImportFile as importFile" class="ng-scope">
<a class="linked" ng-click="choose()">
<span>Markdown File</span>
</a>
</li>
<li ng-controller="ImportFile as importFile" class="ng-scope">
<a class="linked" ng-click="choose(&#39;html&#39;)">
<span>HTML File</span>
</a>
</li>
</ul>
</li>
<li class="menu-item menu-item-icon menu-item--preview">
<a class="menu-link menu-link-preview" preview-toggle="">
<i class="icon icon-preview"><svg viewBox="0 0 19 12" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g id="Mobile---Home" sketch:type="MSArtboardGroup" transform="translate(-234.000000, -85.000000)" fill="#D3DBEB">
<g id="Navigation" sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g id="Menu-Item:-Preview" transform="translate(218.000000, 0.000000)" sketch:type="MSShapeGroup">
<g id="Icon:-Preview" transform="translate(17.000000, 20.000000)">
<path d="M8.90526316,0.0311320755 C3.00069474,0.0311320755 -0.0947368421,4.79641509 -0.0947368421,5.55188679 C-0.0947368421,6.30756604 3.00069474,11.0726415 8.90526316,11.0726415 C14.8094526,11.0726415 17.9052632,6.30756604 17.9052632,5.55188679 C17.9052632,4.79641509 14.8094526,0.0311320755 8.90526316,0.0311320755 L8.90526316,0.0311320755 Z M8.90526316,9.79871698 C6.69618947,9.79871698 4.90509474,7.89737736 4.90509474,5.55188679 C4.90509474,3.20639623 6.69618947,1.3050566 8.90526316,1.3050566 C11.1143368,1.3050566 12.9052421,3.20639623 12.9052421,5.55188679 C12.9052421,7.89737736 11.1143368,9.79871698 8.90526316,9.79871698 L8.90526316,9.79871698 Z M10.9051579,5.55188679 C10.9051579,6.7245283 10.0095158,7.67550943 8.90526316,7.67550943 C7.80063158,7.67550943 6.90536842,6.7245283 6.90536842,5.55188679 C6.90536842,4.37924528 7.80063158,3.4284717 8.90526316,3.4284717 C9.50210526,3.4284717 8.53901053,5.11126415 8.90526316,5.55188679 C9.21656842,5.92609434 10.9051579,5.01330189 10.9051579,5.55188679 L10.9051579,5.55188679 Z" id="Shape"></path>
</g>
</g>
</g>
</g>
</g>
</svg>
</i>
<span class="sr-only">Preview</span>
</a>
</li>
<li class="menu-item menu-item-icon menu-item--settings">
<a class="menu-link menu-link-settings" settings-toggle="">
<i class="icon icon-settings"><svg viewBox="0 0 18 18" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:sketch="http://www.bohemiancoding.com/sketch/ns">
<g id="Page-1" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd" sketch:type="MSPage">
<g id="Mobile---Home" sketch:type="MSArtboardGroup" transform="translate(-286.000000, -81.000000)" fill="#D3DBEB">
<g id="Navigation" sketch:type="MSLayerGroup" transform="translate(0.000000, 65.000000)">
<g id="Menu-Item:-Settings" transform="translate(269.000000, 0.000000)" sketch:type="MSShapeGroup">
<g id="Icon:-Settings" transform="translate(17.000000, 16.000000)">
<path d="M17.341654,7.68935491 L15.5585491,7.39189286 C15.4289531,6.86205804 15.2399933,6.35558705 14.9938996,5.88320759 L16.1353929,4.46787723 C16.3781719,4.16876786 16.3671429,3.73839509 16.1111853,3.44971205 L15.4020134,2.65156473 C15.1449509,2.36318304 14.7186763,2.30219196 14.3934911,2.507625 L12.8685937,3.46620536 C12.1978929,2.99760268 11.4381562,2.65156473 10.6185937,2.45077232 L10.3202679,0.658104911 C10.2576696,0.278517857 9.92918973,0 9.54359598,0 L8.47488616,0 C8.09007589,0 7.76049107,0.278517857 7.69925893,0.658104911 L7.39932589,2.45133482 C6.72173437,2.61723214 6.0864308,2.88502232 5.50665402,3.23770982 L4.05644866,2.20275 C3.74389955,1.97945759 3.31461161,2.01437277 3.04185937,2.28654241 L2.28684375,3.04210045 C2.01467411,3.31485268 1.97975893,3.74414062 2.20363393,4.05668973 L3.24100446,5.50966741 C2.8916317,6.08506473 2.62659375,6.71675223 2.46071652,7.38829687 L0.65784375,7.68935491 C0.278839286,7.75195312 -0.000220982143,8.08047321 -0.000220982143,8.46606696 L-0.000220982143,9.53393304 C-0.000220982143,9.91952679 0.278839286,10.2480469 0.65784375,10.3106451 L2.46071652,10.6117031 C2.59694196,11.1642991 2.79470089,11.6921853 3.05754911,12.1816205 L1.92125893,13.5889554 C1.67930357,13.8877835 1.68946875,14.3184375 1.94542634,14.6068594 L2.6540558,15.4050067 C2.91113839,15.6939308 3.33765402,15.753817 3.66285937,15.5489063 L5.20973437,14.5771875 C5.86426339,15.0248772 6.60473437,15.3539196 7.39932589,15.5489063 L7.69925893,17.341875 C7.76049107,17.7215022 8.09007589,18 8.47488616,18 L9.54359598,18 C9.92918973,18 10.2576696,17.7215022 10.3202679,17.3418951 L10.619096,15.5489263 C11.2882299,15.3852589 11.9154777,15.1221295 12.4900915,14.7754888 L14.0007254,15.8543839 C14.3127321,16.0785 14.7423214,16.0433437 15.0147924,15.7703103 L15.7700893,15.0150134 C16.0419576,14.7430848 16.0787812,14.3140379 15.8529978,14.0009464 L14.7774978,12.4930647 C15.1278951,11.9157388 15.3943192,11.2829263 15.5591518,10.6083683 L17.3422366,10.310625 C17.722346,10.2480268 18.0002812,9.9195067 18.0002812,9.53391295 L18.0002812,8.46604688 C17.9997388,8.08047321 17.7218036,7.75195312 17.341654,7.68935491 L17.341654,7.68935491 Z M9.0283058,12.375 C7.1647433,12.375 5.6533058,10.8632812 5.6533058,9 C5.6533058,7.1364375 7.1647433,5.625 9.0283058,5.625 C10.8915469,5.625 12.4032656,7.1364375 12.4032656,9 C12.4032656,10.8632812 10.8915469,12.375 9.0283058,12.375 L9.0283058,12.375 Z" id="settings_1_"></path>
</g>
</g>
</g>
</g>
</g>
</svg>
</i>
<span class="sr-only">Settings</span>
</a>
</li>
</ul>
</nav>
</div>
<div class="overlay"></div>
<div class="header">
<h2 class="title">Document Name</h2>
<document-title><input class="title-document ng-pristine ng-untouched ng-valid ng-not-empty" type="text" name="documentTitle" ng-change="updateDocument()" ng-model-options="{ debounce: 500 }" ng-model="currentDocument.title">
</document-title>
<!-- ngIf: profile.enableWordsCount && !viewSrcMode --><p ng-if="profile.enableWordsCount &amp;&amp; !viewSrcMode" class="words ng-scope">
<span class="mr10">Reading Time: <span class="counter ng-binding" ng-bind="readingTime">4 min read</span></span>
<span>Words: <span class="counter ng-binding" ng-bind="words">767</span></span>
</p><!-- end ngIf: profile.enableWordsCount && !viewSrcMode -->
<!-- ngIf: profile.enableCharactersCount && !viewSrcMode --><p ng-if="profile.enableCharactersCount &amp;&amp; !viewSrcMode" class="characters ng-scope">Characters: <span class="counter ng-binding" ng-bind="characters">4257</span></p><!-- end ngIf: profile.enableCharactersCount && !viewSrcMode -->
</div>
<div class="g mnone">
<div class="editor-header editor-header--first">
<h3 class="title">Markdown</h3>
<!-- ngIf: !$root.viewSrcMode --><a class="enter-zen-mode ng-scope" ng-click="zenmode.toggle()" ng-if="!$root.viewSrcMode">Toggle Zen Mode</a><!-- end ngIf: !$root.viewSrcMode -->
</div>
<div class="editor-header">
<h3 class="title">Preview</h3>
<a ng-class="{&#39;preview-mode-toggle-html&#39; : $root.viewSrcMode, &#39;preview-mode-toggle-src&#39; : !$root.viewSrcMode}" ng-click="toggleView()" class="preview-mode-toggle-src">Toggle Mode</a>
</div>
<div id="editor1" class="g-b g-b--t1of2 split split-editor" style="height: 582px;">
<div id="editor" class="ui-resizable-e ace_editor ace-tm" style="height: 3164px;"><textarea class="ace_text-input" wrap="off" autocorrect="off" autocapitalize="off" spellcheck="false" style="opacity: 0; left: 51px; top: 0px; height: 28px; width: 7px;"></textarea><div class="ace_gutter" aria-hidden="true"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="margin-top: 0px; height: 3220px; width: 47px;"><div class="ace_gutter-cell " style="height: 28px;">1<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">2<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">3</div><div class="ace_gutter-cell " style="height: 28px;">4</div><div class="ace_gutter-cell " style="height: 28px;">5</div><div class="ace_gutter-cell " style="height: 84px;">6</div><div class="ace_gutter-cell " style="height: 56px;">7</div><div class="ace_gutter-cell " style="height: 84px;">8</div><div class="ace_gutter-cell " style="height: 28px;">9</div><div class="ace_gutter-cell " style="height: 28px;">10<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 56px;">11</div><div class="ace_gutter-cell " style="height: 28px;">12</div><div class="ace_gutter-cell " style="height: 28px;">13</div><div class="ace_gutter-cell " style="height: 84px;">14</div><div class="ace_gutter-cell " style="height: 112px;">15</div><div class="ace_gutter-cell " style="height: 28px;">16</div><div class="ace_gutter-cell " style="height: 28px;">17</div><div class="ace_gutter-cell " style="height: 28px;">18<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">19</div><div class="ace_gutter-cell " style="height: 28px;">20</div><div class="ace_gutter-cell " style="height: 28px;">21</div><div class="ace_gutter-cell " style="height: 28px;">22</div><div class="ace_gutter-cell " style="height: 28px;">23</div><div class="ace_gutter-cell " style="height: 28px;">24</div><div class="ace_gutter-cell " style="height: 28px;">25</div><div class="ace_gutter-cell " style="height: 28px;">26</div><div class="ace_gutter-cell " style="height: 28px;">27</div><div class="ace_gutter-cell " style="height: 28px;">28<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">29</div><div class="ace_gutter-cell " style="height: 168px;">30</div><div class="ace_gutter-cell " style="height: 28px;">31</div><div class="ace_gutter-cell " style="height: 28px;">32</div><div class="ace_gutter-cell " style="height: 140px;">33</div><div class="ace_gutter-cell " style="height: 28px;">34</div><div class="ace_gutter-cell " style="height: 196px;">35</div><div class="ace_gutter-cell " style="height: 28px;">36</div><div class="ace_gutter-cell " style="height: 28px;">37<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">38</div><div class="ace_gutter-cell " style="height: 28px;">39</div><div class="ace_gutter-cell " style="height: 28px;">40</div><div class="ace_gutter-cell " style="height: 28px;">41</div><div class="ace_gutter-cell " style="height: 28px;">42</div><div class="ace_gutter-cell " style="height: 28px;">43</div><div class="ace_gutter-cell " style="height: 28px;">44</div><div class="ace_gutter-cell " style="height: 28px;">45</div><div class="ace_gutter-cell " style="height: 28px;">46<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">47<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">48</div><div class="ace_gutter-cell " style="height: 28px;">49</div><div class="ace_gutter-cell " style="height: 28px;">50</div><div class="ace_gutter-cell " style="height: 28px;">51</div><div class="ace_gutter-cell " style="height: 28px;">52</div><div class="ace_gutter-cell " style="height: 28px;">53</div><div class="ace_gutter-cell " style="height: 28px;">54</div><div class="ace_gutter-cell " style="height: 28px;">55<span class="ace_fold-widget ace_start ace_open" style="height: 28px;"></span></div><div class="ace_gutter-cell " style="height: 28px;">56</div><div class="ace_gutter-cell " style="height: 28px;">57</div><div class="ace_gutter-cell " style="height: 28px;">58</div><div class="ace_gutter-cell " style="height: 28px;">59</div><div class="ace_gutter-cell " style="height: 28px;">60</div><div class="ace_gutter-cell " style="height: 28px;">61</div><div class="ace_gutter-cell " style="height: 28px;">62</div><div class="ace_gutter-cell " style="height: 84px;">63</div><div class="ace_gutter-cell " style="height: 28px;">64</div><div class="ace_gutter-cell " style="height: 28px;">65</div><div class="ace_gutter-cell " style="height: 28px;">66</div><div class="ace_gutter-cell " style="height: 28px;">67</div><div class="ace_gutter-cell " style="height: 28px;">68</div><div class="ace_gutter-cell " style="height: 28px;">69</div><div class="ace_gutter-cell " style="height: 28px;">70</div><div class="ace_gutter-cell " style="height: 28px;">71</div><div class="ace_gutter-cell " style="height: 28px;">72</div><div class="ace_gutter-cell " style="height: 28px;">73</div><div class="ace_gutter-cell " style="height: 28px;">74</div><div class="ace_gutter-cell " style="height: 28px;">75</div><div class="ace_gutter-cell " style="height: 28px;">76</div><div class="ace_gutter-cell " style="height: 28px;">77</div><div class="ace_gutter-cell " style="height: 28px;">78</div><div class="ace_gutter-cell " style="height: 28px;">79</div><div class="ace_gutter-cell " style="height: 28px;">80</div><div class="ace_gutter-cell " style="height: 28px;">81</div><div class="ace_gutter-cell " style="height: 28px;">82</div><div class="ace_gutter-cell " style="height: 28px;">83</div><div class="ace_gutter-cell " style="height: 28px;">84</div><div class="ace_gutter-cell " style="height: 28px;">85</div></div><div class="ace_gutter-active-line" style="top: 0px; height: 28px;"></div></div><div class="ace_scroller" style="left: 47px; right: 0px; bottom: 0px;"><div class="ace_content" style="margin-top: 0px; width: 695px; height: 3220px; margin-left: 0px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 564px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height:28px;top:0px;left:0;right:0;"></div></div><div class="ace_layer ace_text-layer" style="padding: 0px 4px;"><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_1">#</span><span class="ace_heading"> Requirements</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_2">##</span><span class="ace_heading"> Introduction</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:84px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">The Tic-Tac-Toe game is a thought-provoking game which is performed on a panel of 3 by 3 grid </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">consisting 9 boxes. Each participant is assigned a special symbol i.e. either X or O to </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">demonstrate that the particular box is filled by the particular participant.</span></div></div><div class="ace_line_group" style="height:56px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">The empty boxes on the panel are chosen by the participants to mark their symbol on the game panel </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">alternatively.</span></div></div><div class="ace_line_group" style="height:84px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">It is a game of perfect information which illustrates that the previously occurred actions are </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">known to each participant at the time of decision. The winner of the game is the participant who </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">first cover a horizontal, vertical or diagonal row of the board having only their symbols.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_1">#</span><span class="ace_heading"> Research</span></div></div><div class="ace_line_group" style="height:56px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">Tic-Tac-Toe Game Boards.!</span>[<span class="ace_string">Tic-Tac-Toe Game </span></div><div class="ace_line" style="height:28px"><span class="ace_string">Boards</span>](<span class="ace_markup ace_underline">https://miro.medium.com/max/512/1*YgslEHb5SVUr3rLw7-vagA.png</span>)</div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:84px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">The participant who covers a row on the game panel with his assigned symbol first, will be </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">declared as the winner. The game outcome is a draw when none of the boxes are empty and none of </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">the sequences are formed i.e. vertical, horizontal or diagonal by any of the participant. </span></div></div><div class="ace_line_group" style="height:112px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">The participants of this game have a special scheme to play it. However, the chances of win is </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">more for the participant who has performed this earlier, in comparison with the new participant. </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">If both of the participants perform smartly, then game outcome will be a draw. An optimal strategy </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">is required to play the game so that</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">either the player win or game will be a draw and also play optimally with a sub-optimal opponent.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_2">##</span><span class="ace_heading"> Features</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">The computer implementation of the game Tic-Tac-Toe has many features as compared to the</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">traditional way of playing it with paper and pencil.The various features are:</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">The game has been made user friendly with proper use of VS code.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">The user can play as many games without any interruption.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">By defualt the player1 that is first player as symbol of X and another palyer as O.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">The player can win the game, draw the game or will loose the game.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">It’s a good brain exercise for all age group people.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_2">##</span><span class="ace_heading"> Defining Our System</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:168px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">Minimax Algorithm is a decision rule formulated for 2 player zero-sum games (Tic-Tac-Toe, Chess, </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">Go, etc.). This algorithm sees a few steps ahead and puts itself in the shoes of its opponent. It </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">keeps playing and exploring subsequent possible states until it reaches a terminal state resulting </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">in a draw, a win, or a loss. Being in any of these possible terminal states has some utility for </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">the AI — such as being in a ‘Win’ state is good (utility is positive), being in a ‘Loss’ state is </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">bad (utility is negative), and being in a draw in neither good nor bad (utility is neutral).</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:140px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml"> it works by visualizing all future possible states of the board and constructs it in the form of </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">a tree. When the current board state is given to the algorithm (the root of the tree), it splits </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">into ’n’ branches (where n denotes the number of moves that can be chosen by the number of empty </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">cells where the AI can be placed). If any of these new states is a terminal state, no further </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">splits are performed for this state and it is assigned a score.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml"> </span></div></div><div class="ace_line_group" style="height:196px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml"> there are no terminal states — each of these new states is considered as new root and they give </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">rise to a tree of their own. But, there’s a catch — since this is a 2-player game and the players </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">take turns alternatively, therefore whenever we go one layer deeper in the network, we need to </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">change the player which would be placed in one of the empty cells. This way we can visualize what </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">moves the other player would take as a result of our move. The algorithm evaluates the best move </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">to take by choosing the move which has the maximum score when it is the AI’s turn and choosing </span></div><div class="ace_line" style="height:28px">&nbsp;<span class="ace_text ace_xml">the minimum score when it is the Human’s turn.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_1">#</span><span class="ace_heading"> Rules</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">-  </span><span class="ace_list">The game is played on a 3x3 game board.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">The first player is known as X and the second is O.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">X always goes first.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">Players alternate placing Xs and Os on the game board.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_list">- </span><span class="ace_list">If one has 3 in a row and all nine squares are filled no one wins, the game is a draw.</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_1">#</span><span class="ace_heading"> Detail requirements</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_2">##</span><span class="ace_heading"> High Level Requirements:</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| ID | Descriptions | Status (Implemented/Future) |     </span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| ------ | ------ | ------ |</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| 01 | Initial game board as to created with empty cell | Done |</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| 02 | Here the single board is used in the entire iteration  | Done |</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_markup ace_heading ace_2">##</span><span class="ace_heading"> Low level Requirements:</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| ID | Descriptions | Status (Implemented/Future) |     </span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| ------ | ------ | ------ |</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">| 01 | In this project no need to assign the symbol fro each palyer | Done |</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"><span class="ace_string ace_strong">**Free Software, Hell Yeah!**</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:84px"><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">[//]: # (These are reference links used in the body of this note and get stripped out when the </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">markdown processor does its job. There is no need to format nicely because it shouldn't be seen. </span></div><div class="ace_line" style="height:28px"><span class="ace_text ace_xml">Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">dill</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">git-repo-url</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger.git&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">john gruber</span>]: <span class="ace_url">&lt;http://daringfireball.net&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">df1</span>]: <span class="ace_url">&lt;http://daringfireball.net/projects/markdown/&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">markdown-it</span>]: <span class="ace_url">&lt;https://github.com/markdown-it/markdown-it&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">Ace Editor</span>]: <span class="ace_url">&lt;http://ace.ajax.org&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">node.js</span>]: <span class="ace_url">&lt;http://nodejs.org&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">Twitter Bootstrap</span>]: <span class="ace_url">&lt;http://twitter.github.com/bootstrap/&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">jQuery</span>]: <span class="ace_url">&lt;http://jquery.com&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">@tjholowaychuk</span>]: <span class="ace_url">&lt;http://twitter.com/tjholowaychuk&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">express</span>]: <span class="ace_url">&lt;http://expressjs.com&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">AngularJS</span>]: <span class="ace_url">&lt;http://angularjs.org&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">Gulp</span>]: <span class="ace_url">&lt;http://gulpjs.com&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">PlDb</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger/tree/master/plugins/dropbox/README.md&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">PlGh</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger/tree/master/plugins/github/README.md&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">PlGd</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger/tree/master/plugins/googledrive/README.md&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">PlOd</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger/tree/master/plugins/onedrive/README.md&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">PlMe</span>]: <span class="ace_url">&lt;https://github.com/joemccann/dillinger/tree/master/plugins/medium/README.md&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px">   [<span class="ace_constant">PlGa</span>]: <span class="ace_url">&lt;https://github.com/RahulHP/dillinger/blob/master/plugins/googleanalytics/README.md&gt;</span></div></div><div class="ace_line_group" style="height:28px"><div class="ace_line" style="height:28px"></div></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer ace_hidden-cursors"><div class="ace_cursor" style="left: 4px; top: 0px; width: 7px; height: 28px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="display: none; width: 22px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 22px; height: 3164px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 22px; left: 47px; right: 0px;"><div class="ace_scrollbar-inner" style="height: 22px; width: 702px;"></div></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font: inherit; overflow: visible;"></div><div style="height: auto; width: auto; top: 0px; left: 0px; visibility: hidden; position: absolute; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX</div></div></div>
</div>
<div id="preview1" class="g-b g-b--t1of2 split split-preview" style="height: 582px;">
<div id="preview" class="preview-html" preview="" debounce="150"><h1 class="code-line" data-line-start="0" data-line-end="1"><a id="Requirements_0"></a>Requirements</h1>
<h2 class="code-line" data-line-start="1" data-line-end="2"><a id="Introduction_1"></a>Introduction</h2>
<p class="has-line-data" data-line-start="5" data-line-end="8">The Tic-Tac-Toe game is a thought-provoking game which is performed on a panel of 3 by 3 grid consisting 9 boxes. Each participant is assigned a special symbol i.e. either X or O to demonstrate that the particular box is filled by the particular participant.<br>
The empty boxes on the panel are chosen by the participants to mark their symbol on the game panel alternatively.<br>
It is a game of perfect information which illustrates that the previously occurred actions are known to each participant at the time of decision. The winner of the game is the participant who first cover a horizontal, vertical or diagonal row of the board having only their symbols.</p>
<h1 class="code-line" data-line-start="9" data-line-end="10"><a id="Research_9"></a>Research</h1>
<p class="has-line-data" data-line-start="10" data-line-end="11">Tic-Tac-Toe Game Boards.<img src="./Readme_files/1_YgslEHb5SVUr3rLw7-vagA.png" alt="Tic-Tac-Toe Game Boards"></p>
<p class="has-line-data" data-line-start="13" data-line-end="16">The participant who covers a row on the game panel with his assigned symbol first, will be declared as the winner. The game outcome is a draw when none of the boxes are empty and none of the sequences are formed i.e. vertical, horizontal or diagonal by any of the participant.<br>
The participants of this game have a special scheme to play it. However, the chances of win is more for the participant who has performed this earlier, in comparison with the new participant. If both of the participants perform smartly, then game outcome will be a draw. An optimal strategy is required to play the game so that<br>
either the player win or game will be a draw and also play optimally with a sub-optimal opponent.</p>
<h2 class="code-line" data-line-start="17" data-line-end="18"><a id="Features_17"></a>Features</h2>
<p class="has-line-data" data-line-start="18" data-line-end="20">The computer implementation of the game Tic-Tac-Toe has many features as compared to the<br>
traditional way of playing it with paper and pencil.The various features are:</p>
<ul>
<li class="has-line-data" data-line-start="20" data-line-end="21">The game has been made user friendly with proper use of VS code.</li>
<li class="has-line-data" data-line-start="21" data-line-end="22">The user can play as many games without any interruption.</li>
<li class="has-line-data" data-line-start="22" data-line-end="23">By defualt the player1 that is first player as symbol of X and another palyer as O.</li>
<li class="has-line-data" data-line-start="23" data-line-end="24">The player can win the game, draw the game or will loose the game.</li>
<li class="has-line-data" data-line-start="24" data-line-end="25">It’s a good brain exercise for all age group people.</li>
</ul>
<h2 class="code-line" data-line-start="27" data-line-end="28"><a id="Defining_Our_System_27"></a>Defining Our System</h2>
<p class="has-line-data" data-line-start="29" data-line-end="30">Minimax Algorithm is a decision rule formulated for 2 player zero-sum games (Tic-Tac-Toe, Chess, Go, etc.). This algorithm sees a few steps ahead and puts itself in the shoes of its opponent. It keeps playing and exploring subsequent possible states until it reaches a terminal state resulting in a draw, a win, or a loss. Being in any of these possible terminal states has some utility for the AI — such as being in a ‘Win’ state is good (utility is positive), being in a ‘Loss’ state is bad (utility is negative), and being in a draw in neither good nor bad (utility is neutral).</p>
<p class="has-line-data" data-line-start="32" data-line-end="33">it works by visualizing all future possible states of the board and constructs it in the form of a tree. When the current board state is given to the algorithm (the root of the tree), it splits into ’n’ branches (where n denotes the number of moves that can be chosen by the number of empty cells where the AI can be placed). If any of these new states is a terminal state, no further splits are performed for this state and it is assigned a score.</p>
<p class="has-line-data" data-line-start="34" data-line-end="35">there are no terminal states — each of these new states is considered as new root and they give rise to a tree of their own. But, there’s a catch — since this is a 2-player game and the players take turns alternatively, therefore whenever we go one layer deeper in the network, we need to change the player which would be placed in one of the empty cells. This way we can visualize what moves the other player would take as a result of our move. The algorithm evaluates the best move to take by choosing the move which has the maximum score when it is the AI’s turn and choosing the minimum score when it is the Human’s turn.</p>
<h1 class="code-line" data-line-start="36" data-line-end="37"><a id="Rules_36"></a>Rules</h1>
<ul>
<li class="has-line-data" data-line-start="37" data-line-end="38">The game is played on a 3x3 game board.</li>
<li class="has-line-data" data-line-start="38" data-line-end="39">The first player is known as X and the second is O.</li>
<li class="has-line-data" data-line-start="39" data-line-end="40">X always goes first.</li>
<li class="has-line-data" data-line-start="40" data-line-end="41">Players alternate placing Xs and Os on the game board.</li>
<li class="has-line-data" data-line-start="41" data-line-end="42">If one has 3 in a row and all nine squares are filled no one wins, the game is a draw.</li>
</ul>
<h1 class="code-line" data-line-start="45" data-line-end="46"><a id="Detail_requirements_45"></a>Detail requirements</h1>
<h2 class="code-line" data-line-start="46" data-line-end="47"><a id="High_Level_Requirements_46"></a>High Level Requirements:</h2>
<table class="table table-striped table-bordered">
<thead>
<tr>
<th>ID</th>
<th>Descriptions</th>
<th>Status (Implemented/Future)</th>
</tr>
</thead>
<tbody>
<tr>
<td>01</td>
<td>Initial game board as to created with empty cell</td>
<td>Done</td>
</tr>
<tr>
<td>02</td>
<td>Here the single board is used in the entire iteration</td>
<td>Done</td>
</tr>
</tbody>
</table>
<h2 class="code-line" data-line-start="54" data-line-end="55"><a id="Low_level_Requirements_54"></a>Low level Requirements:</h2>
<table class="table table-striped table-bordered">
<thead>
<tr>
<th>ID</th>
<th>Descriptions</th>
<th>Status (Implemented/Future)</th>
</tr>
</thead>
<tbody>
<tr>
<td>01</td>
<td>In this project no need to assign the symbol fro each palyer</td>
<td>Done</td>
</tr>
</tbody>
</table>
<p class="has-line-data" data-line-start="60" data-line-end="61"><strong>Free Software, Hell Yeah!</strong></p>
</div>
</div>
</div>
</div>
</div>
<script src="./Readme_files/monetization.js.download" type="text/javascript"></script>
<script>
  (function () {
    if (typeof _bsa !== 'undefined' && _bsa) {
      _bsa.init('default', 'CVADP53W', 'placement:dillingerio', {
        target: '.ad-container',
        align: 'horizontal',
        disable_css: 'true'
      });
    }
  })();
</script>
<script src="./Readme_files/main.bundle.js.download" type="text/javascript" async=""></script>


</body></html>