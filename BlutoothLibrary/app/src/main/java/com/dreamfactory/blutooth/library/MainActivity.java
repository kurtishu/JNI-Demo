package com.dreamfactory.blutooth.library;

import android.os.Bundle;
import android.support.design.widget.FloatingActionButton;
import android.support.design.widget.Snackbar;
import android.support.v7.app.AppCompatActivity;
import android.support.v7.widget.Toolbar;
import android.util.Log;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;

import java.io.UnsupportedEncodingException;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("NdkJniDemo");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toolbar toolbar = (Toolbar) findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        FloatingActionButton fab = (FloatingActionButton) findViewById(R.id.fab);
        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Snackbar.make(view, "Replace with your own action", Snackbar.LENGTH_LONG)
                        .setAction("Action", null).show();
            }
        });

//        // 打Log测试程序
//        Log.i("Kurtis", JNIUtil.getStringFromC());
//        int[] args = new int[]{1, 2};
//
//        byte[] convertedSetting = JNIUtil.convertSettingsBeforePassedToBluetooth(args);
//        Log.i("Kurtis", "convertSettingsBeforePassedToBluetooth: result " + convertByteArrayToString(convertedSetting));
//        byte[] convertedOther = JNIUtil.convertOtherBeforePassedToBluetooth(args);
//        Log.i("Kurtis", "convertOtherBeforePassedToBluetooth: result: " + convertByteArrayToString(convertedOther));
//
//
//        byte[] bytes = new byte[]{1, 2};
//        Log.i("Kurtis", "convertSettingsFromBluetooth: result: " + convertIntArrayToString(JNIUtil.convertSettingsFromBluetooth(bytes)));
//        Log.i("Kurtis", "convertOtherFromBluetooth: result: " + convertIntArrayToString(JNIUtil.convertOtherFromBluetooth(bytes)));

    }


    private String convertByteArrayToString(byte[] array) {
        String result = "";
        for (byte b : array) {
            result += String.valueOf(b) + " -> ";
        }
        return result;
    }

    private String convertIntArrayToString (int[] array) {
        String result = "";
        for (int b : array) {
            result += String.valueOf(b) + " -> ";
        }
        return result;
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
